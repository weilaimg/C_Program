//
//  main.c
//  2178
//
//  Created by WeiLai’s Macbook Pro on 15/12/7.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int t,n;double sum;
    scanf("%d",&t);
    while (t--)
    {   scanf("%d",&n);
        sum=pow(2, n)-1;
        printf("%.0lf\n",sum);
    }
}