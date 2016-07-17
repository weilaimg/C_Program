//
//  main.c
//  2004
//
//  Created by WeiLai’s Macbook Pro on 15/9/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    double a;
    while (scanf("%lf",&a)!=EOF)
    {
        if (a<=100&a>=90)
        {
            printf("A\n");
        }
        if (a>=80&a<=89)
        {
            printf("B\n");
        }
        if (a>=70&a<=79)
        {
            printf("C\n");
        }
        if (a>=60&a<=69)
        {
            printf("D\n");
        }
        if (a>=0&a<=59)
        {
            printf("E\n");
        }
        if (a>100)
        {
            printf("Score is error!\n");
        }
        if (a<0)
        {
            printf("Score is error!\n");
        }
    }
    
    return 0;
}