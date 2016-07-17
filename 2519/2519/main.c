//
//  main.c
//  2519
//
//  Created by WeiLai’s Macbook Pro on 15/10/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include <stdio.h>
int main()
{
    int a,b,c,n,i;
    double sum1,t,sum2;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d%d",&a,&b);
        sum1=1;
        for (i=1;i<=b;i++)
        {
            sum1=a*sum1;
            a=a-1;
        }
        sum2=1;
        c=b;
        for (i=1;i<=c;i++)
        {
            sum2=b*sum2;
            b=b-1;
        }
        t=sum1/sum2;
        printf("%.0lf\n",t);
    }
    return 0;
}