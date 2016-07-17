//
//  main.c
//  2085
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
/*
#include <stdio.h>
int f (int n,long long int h,long long int l)
{
    int i;
    long long int a,b;
    if (n!=0)
    {
        a=0;
        b=0;
        for (i=1; i<=h; i++)
        {
            a+=3;b+=1;
        }
        for (i=1; i<=l; i++)
        {
            a+=2;b+=1;
        }
        n--;h=a;l=b;
        f(n, h, l);
    }
    else printf("%lld,%lld\n",h,l);
    return 0;
}
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        if (n==-1)
        {
            break;
        }
        f(n-1, 3, 1);
    }
    return 0;
}
*/
#include<stdio.h>
long long int a[34]={1,1},b[34]={0};
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=-1)
    {
        int i;
        for(i=1;i<=n;i++)
        {
            a[i]=a[i-1]*3+b[i-1]*2;
            b[i]=a[i-1]+b[i-1];
        }
        printf("%lld, %lld\n",a[n],b[n]);
    }
    return 0;
}