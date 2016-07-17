//
//  main.c
//  1061
//
//  Created by WeiLai’s Macbook Pro on 15/10/27.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include<stdio.h>
int main()
{
    long long int i,n,s,m;
    scanf("%lld",&n);
    {
        
        while(n--)
        {
            scanf("%lld",&m);
            s=m;
            for (i=2;i<=m%4+4;i++)
            {
                s=s*m%10;
            }
            printf("%lld\n",s);
        }
    }
    return 0;
}
