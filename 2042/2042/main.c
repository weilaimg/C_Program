//
//  main.c
//  2042
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,sum=3,i,a;
    scanf("%d",&n);
    {
        while (n--)
        {
            scanf("%d",&a);
            sum=3;
            for (i=1; i<=a; i++)
            {
                sum=(sum-1)*2;
            }
            printf("%d\n",sum);
        }
    }
}