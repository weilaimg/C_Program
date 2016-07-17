//
//  main.c
//  2047
//
//  Created by WeiLai’s Macbook Pro on 15/12/13.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    long long int a[45]={0,3,8};
    int i;
    for (i=3; i<41; i++)
        a[i]=(a[i-1]+a[i-2])*2;
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",a[n]);
    }
    return 0;
}