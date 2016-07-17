//
//  main.c
//  1196
//
//  Created by WeiLai’s Macbook Pro on 15/12/7.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    while (scanf("%d",&a)!=EOF)
    {
        if (a<=0) {
            break;
        }
        double t=0;
        while (a%2==0)
        {
            a=a/2;
            t++;
        }
        printf("%.0lf\n",pow(2, t));
        
    }
    return 0;
}