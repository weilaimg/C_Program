//
//  main.c
//  2160
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include<stdio.h>
int main()
{
    int t,n,a[200],i;
    scanf("%d",&t);
    while(t--)
    {
        a[1]=1;
        a[2]=2;
        scanf("%d",&n);
        for(i=3;i<=n;i++)
            a[i]=a[i-1]+a[i-2];
        printf("%d\n",a[n]);
    }
    return 0;
}