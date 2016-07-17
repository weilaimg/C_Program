//
//  main.c
//  2054
//
//  Created by WeiLai’s Macbook Pro on 15/10/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        if (abs(a-b)<=1e-6)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}