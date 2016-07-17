//
//  main.c
//  2018
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    long long f[100];
    f[1]=1;
    f[2]=2;
    f[3]=3;
    f[4]=4;
    for(int i=5;i<56;i++)
        f[i]=f[i-3]+f[i-1];
    int n;
    while((scanf("%d",&n)!=EOF)&&n!=0)
        printf("%lld\n",f[n]);
    return 0;
}
