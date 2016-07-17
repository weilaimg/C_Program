//
//  main.c
//  2070
//
//  Created by WeiLai’s Macbook Pro on 15/11/14.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
long long int a[100];
int main()
{
    a[0]=0;a[1]=1;
    for (int i=2; i<=60; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        if (n==-1)
        {
            break;
        }
        printf("%lld\n",a[n]);
    }
    return 0;
}