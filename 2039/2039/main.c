//
//  main.c
//  2039
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include <stdio.h>
int main()
{
    int n;
    float a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%f%f%f",&a,&b,&c);
        if(a+b<=c||a+c<=b||b+c<=a)
        {
            printf("NO");
        }
        else if(a+b>c&&a+c>b&&b+c>a)
        {
            printf("YES");
        }
        printf("\n");
    }
    
    return 0;
}