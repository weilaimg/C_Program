//
//  main.c
//  2014
//
//  Created by WeiLai’s Macbook Pro on 15/9/29.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t;
    double n,max,min,a,i;
    double sum,b;
    while (scanf("%d",&t)!=EOF)
    {
        max=-1;
        min=101;
        n=t;
        sum=0;
        for (i=1; i<=t; i++)
        {
            scanf("%lf",&a);
            if (max<=a)max=a;else max=max;
            if (min>=a)min=a;else min=min;
            sum+=a;

        }
        b=(sum-max-min)/(n-2);
        printf("%.2lf\n",b);
    }
    return 0;
}