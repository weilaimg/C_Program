//
//  main.c
//  2032
//
//  Created by WeiLai’s Macbook Pro on 15/10/21.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,i,j;
    int a[100][100];
    while (scanf("%d",&n)!=EOF)
    {
        for (j=1; j<=n; j++)
        {
            a[1][j]=1;
            a[j][j]=1;
        }
        for (i=2; i<=n; i++)
        {
            for (j=2; j<=n; j++)
            {
                a[j][i]=a[j-1][i-1]+a[j][i-1];
            }
        }
        for (i=1; i<=n; i++)
        {
            for (j=1; j<=i; j++)
            {
                if (i!=j)
                {
                    printf("%d ",a[j][i]);
                }
                if (i==j)
                {
                    printf("%d",a[j][i]);
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
    return 0;
}