//
//  main.c
//  2022
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int m,n,a[100][100],min,i,j;
    while (scanf("%d%d",&m,&n)!=EOF)
    {
        for (i=1; i<=m; i++)
        {
            for (j=1; j<=n; j++)
            {
                scanf("%d",&a[j][i]);
            }
        }
        min=0;
        for (i=1; i<=m; i++)
        {
            for (j=1; j<=n; j++)
            {
                if (min*min<a[j][i]*a[j][i])
                {
                    min=a[j][i];
                }
            }
        }
        for (i=1; i<=m; i++)
        {
            for (j=1; j<=n; j++)
            {
                if (min==a[j][i])
                {
                    break;
                }
            }
            if (min==a[j][i])
            {
                break;
            }
        }
        printf("%d %d %d\n",i,j,a[j][i]);
    }
    return 0;
}


/*
#include <stdio.h>
#include <math.h>
int main()
{
    int a,m,n,i,j,t,x,y;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        t=0;
        for(i=1;i<=m;i++)
            for(j=1;j<=n;j++)
            {
                scanf("%d",&a);
                if(abs(a)>abs(t))
                {
                    t=a;
                    x=i;
                    y=j;
                }
            }
        printf("%d %d %d\n",x,y,t);
    }
    return 0;
}*/