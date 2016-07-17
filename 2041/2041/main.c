//
//  main.c
//  2041
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    long long f[45];
    int i;
    f[2]=1;
    f[3]=2;
    for(i=4;i<45;i++)
        f[i]=f[i-1]+f[i-2];
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",f[n]);
    }
    return 0;
}