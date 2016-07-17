//
//  main.c
//  2001
//
//  Created by WeiLai’s Macbook Pro on 15/9/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    double x1,y1,x2,y2;
    while (scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF)
    {
        double t1,t2,t3;
        t1=x2-x1;
        t2=y2-y1;
        t3=pow(t1, 2)+pow(t2, 2);
        printf("%.2lf\n",sqrt(t3));
    }
    return 0;
}