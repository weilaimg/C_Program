//
//  main.c
//  2548
//
//  Created by WeiLai’s Macbook Pro on 15/10/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    double n,u,v,w,l,t;
    scanf("%lf",&n);
    while (n--)
    {
        scanf("%lf%lf%lf%lf",&u,&v,&w,&l);
        t=l/(u+v);
        printf("%.3lf\n",w*t);
    }
    return 0;
}