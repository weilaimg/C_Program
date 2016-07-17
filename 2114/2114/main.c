//
//  main.c
//  2114
//
//  Created by WeiLai’s Macbook Pro on 15/12/1.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include <stdio.h>
int main()
{
    long long int n,sum;
    while(scanf("%lld",&n)==1)
    {
        n%=10000;
        sum=(n*(n+1)/2)*(n*(n+1)/2)%10000;
        printf("%04lld\n",sum);
    }
    
    return 0;
}
