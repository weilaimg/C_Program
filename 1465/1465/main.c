//
//  main.c
//  1465
//
//  Created by WeiLai’s Macbook Pro on 15/10/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//


#include<stdio.h>
int main()
{
    
    long long int  a[21];
    int n;
    a[2]=1,a[3]=2;
    for(int i=4;i<21;i++)
    {
        a[i]=(i-1)*(a[i-1]+a[i-2]);
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",a[n]);
    }
    return 0;
}
