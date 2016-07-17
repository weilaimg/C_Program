//
//  main.c
//  2009
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int n,i=0;
    double m,sum;
    while (scanf("%lf%d",&m,&n)!=EOF)
    {
        sum=0;
        for (i=0; i<n; i++)
        {
            sum+=m;
            m=sqrt(m);
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}