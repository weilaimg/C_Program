//
//  main.c
//  2501
//
//  Created by WeiLai’s Macbook Pro on 15/10/27.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[35],t,i,x;
    a[1]=1,a[2]=3;
    for (i=3; i<=35; i++)
    {
        a[i]=a[i-1]+2*a[i-2];
    }
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&x);
        printf("%d\n",a[x]);
    }
}