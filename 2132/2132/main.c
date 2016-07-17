//
//  main.c
//  2132
//
//  Created by WeiLai’s Macbook Pro on 15/12/7.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    long long a[100005];
    a[1]=1;a[2]=3;
    for(int i=3;i<100002;i++)
    {
        if(i%3==0)
            a[i]=a[i-1]+i*i*i;
        else
            a[i]=a[i-1]+i;
    }
    long long int n;
    while (scanf("%lld",&n)&&n>=0)
    {
        printf("%lld\n",a[n]);
    }
}