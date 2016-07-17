//
//  main.c
//  2023
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    double a[100][100],b[100],sum1,sum2,sum3;int sum4;
    int m,n,i,j;
    while (scanf("%d%d",&n,&m)!=EOF)
    {
        for (i=1; i<=n; i++)
        {
            for (j=1; j<=m; j++)
            {
                scanf("%lf",&a[j][i]);
            }
        }
        for (i=1; i<=n; i++)
        {
            sum1=0;
            for (j=1; j<=m; j++)
            {
                sum1=a[j][i]+sum1;
            }
            if (i!=n)
            {
                printf("%.2lf ",sum1/m);
            }
            if (i==n)
            {
                printf("%.2lf",sum1/m);
            }
        }
        printf("\n");
        for (j=1; j<=m; j++)
        {
            sum2=0;
            for (i=1; i<=n; i++)
            {
                sum2=a[j][i]+sum2;
            }
            if (j!=m)
            {
                printf("%.2lf ",sum2/n);
            }
            if (j==m)
            {
                printf("%.2lf",sum2/n);
            }
            b[j]=sum2/n;
        }
        printf("\n");
        sum4=0;
        for (i=1; i<=n; i++)
        {
            sum3=0;
            for (j=1; j<=m; j++)
            {
                if (a[j][i]>=b[j])
                {
                    sum3+=1;
                }
                if (sum3==m)
                {
                    sum4+=1;
                }
            }
        }
        printf("%d",sum4);
        printf("\n\n");
    }
    return 0;
}