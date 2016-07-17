//
//  main.c
//  2096
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,a,b,a1,b1,sum,sum1;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d%d",&a,&b);
        a1=a%100;
        b1=b%100;
        sum=a1+b1;
        sum1=sum%100;
        printf("%d\n",sum1);
    }
    return 0;
}