//
//  main.c
//  2046
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    long long int a[51],n,i;
    a[1]=1;a[2]=2;
    for (i=3; i<51; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while (scanf("%lld",&n)!=EOF)
    {
        printf("%lld\n",a[n]);
    }
    return 0;
}