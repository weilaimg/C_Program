//
//  main.c
//  2008
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    double t;
    while (scanf("%lf",&t)!=EOF)
        {
            if (t==0)
            {
                break;
            }

        int sum1=0,sum2=0,sum3=0;
        while (t--)
        {
            double n;
            scanf("%lf",&n);
            if (n>0)
            {
                sum3+=1;
            }
            if (n==0)
            {
                sum2+=1;
            }
            if (n<0)
            {
                sum1+=1;
            }
        }
        printf("%d %d %d\n",sum1,sum2,sum3);
    }
    return 0;
}