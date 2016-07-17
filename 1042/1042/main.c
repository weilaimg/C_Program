//
//  main.c
//  1042
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    double n,sum;
    while (scanf("%lf",&n)!=EOF)
    {
        sum=1;
        for (int i=0; i<n; i++)
        {
            sum*=n;
            n--;
        }
        printf("%lf\n",sum);
    }
    return 0;
}