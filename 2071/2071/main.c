//
//  main.c
//  2071
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,m,i;
    double a[100],b;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&m);
        for (i=0; i<m; i++)
        {
            scanf("%lf",&b);
            a[i]=b;
        }
        for (i=0; i<m-1; i++)
        {
            if (a[i]>a[i+1])
            {
                a[100]=a[i];
                a[i]=a[i+1];
                a[i+1]=a[100];
            }
        }
        printf("%.2lf\n",a[m-1]);
    }
    return 0;
}