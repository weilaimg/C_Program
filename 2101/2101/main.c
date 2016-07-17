//
//  main.c
//  2101
//
//  Created by WeiLai’s Macbook Pro on 15/10/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,sum,c;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        sum=a+b;
        c=sum%86;
        if (c==0)
        {
            printf("yes\n");
        }
        else printf("no\n");
    }
}