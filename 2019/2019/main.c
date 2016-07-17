//
//  main.c
//  2019
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include <stdio.h>
int main()
{
    int m,n,a[100],i;
    while ((scanf("%d%d",&n,&m)!=EOF)&&(n!=0||m!=0))
    {
        for (i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (i=0; i<n; i++)
        {
            if (m>a[i])
            {
                printf("%d ",a[i]);
            }
            else break;
        }
        printf("%d",m);
        for (; i<n; i++)
        {
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    return 0;
}