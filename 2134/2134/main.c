//
//  main.c
//  2134
//
//  Created by WeiLai’s Macbook Pro on 15/12/7.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    double r;
    while (scanf("%lf",&r)!=EOF)
    {
        if (r==0) break;
        printf("%.3lf %.3lf\n",sqrt(r*r/3.0),sqrt(r*r*2.0/3));
    }
    return 0;
}