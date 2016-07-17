//
//  main.c
//  2504
//
//  Created by WeiLai’s Macbook Pro on 15/10/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//


#include<stdio.h>
int gcd(int x,int y)
{
    return y==0?x:gcd(y,x%y);
}

int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        c=2*b;
        while(gcd(a,c)!=b)
            c+=b;
        printf("%d\n",c);
    }
}