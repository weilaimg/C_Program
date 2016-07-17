//
//  main.c
//  1076
//
//  Created by WeiLai’s Macbook Pro on 15/11/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,t,n,i;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&a,&b);
        n=0;
        for (i=a; b!=n; i++)
        {
            if ((i%4==0&&i%100!=0)||i%400==0)
            {
                n++;
            }
        }
        printf("%d\n",--i);
    }
    return 0;
}