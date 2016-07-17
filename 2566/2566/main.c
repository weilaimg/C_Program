//
//  main.c
//  2566
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,m;
    int i,j,k;
    int t,a;
    scanf("%d",&a);
    while (a--)
        scanf("%d%d",&n,&m);
    {
        t=0;
        for (i=0; i<=n; i++)
        {
            for (j=0; j<=n; j++)
            {
                for (k=0; k<=n; k++)
                {
                    if (i+2*j+5*k==m && i+j+k==n)
                    {
                        t++;
                    }
                }
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
/*
int main()
{
    int x,y,z,n,m,sum,t;
    scanf("%d",&t);
    {
        while(t--)
        {
            scanf("%d %d",&n,&m);
            sum=0;
            for(x=0;x<=n;x++)
            {
                for(y=0;y<=n;y++)
                {
                    for(z=0;z<=n;z++)
                    {
                        if(x+2*y+5*z==m&&x+y+z==n)sum++;
                    }
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}*/