//
//  main.c
//  2090
//
//  Created by WeiLai’s Macbook Pro on 15/10/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    double a,b,d;
    char c[1000];
    b=0;
    while (scanf("%s %lf %lf",c,&a,&b)!=EOF)
    {
        d+=a*b;
    }
    printf("%.1lf\n",d);
    return 0;
}