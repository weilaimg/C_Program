//
//  main.c
//  2154
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include<stdio.h>
int a[1010],b[1010],c[1010];
int n,t;
int main()
{
    a[0]=1;
    b[0]=0;
    c[0]=0;
    for(int i=1;i<=1001;i++)
    {
        a[i]=(b[i-1]+c[i-1]) % 10000;
        b[i]=(a[i-1]+c[i-1]) % 10000;
        c[i]=(a[i-1]+b[i-1]) % 10000;
    }
    while (scanf("%d",&t)!=EOF)
    {
        if (t==0) break;
        printf("%d\n",a[t]);
    }
    return 0;
}