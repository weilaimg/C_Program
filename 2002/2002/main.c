//
//  main.c
//  2002
//
//  Created by WeiLai’s Macbook Pro on 15/9/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define PI 3.1415927
int main()
{
    double r;
    while (scanf("%lf",&r)!=EOF)
    {
        double r3,v;
        r3=pow(r, 3);
        v=PI*r3*4/3;
        printf("%.3lf\n",v);
    }
    return 0;
}