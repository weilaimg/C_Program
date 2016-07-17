//
//  main.c
//  2003
//
//  Created by WeiLai’s Macbook Pro on 15/9/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    double t;
    while (scanf("%lf",&t)!=EOF)
    {
        double t2;        t2=pow(t, 2);
        printf("%.2lf\n",sqrt(t2));
    }
    return 0;
}