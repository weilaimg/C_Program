//
//  main.c
//  2011
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int m,i=1;
        scanf("%d",&m);
        double sum=0;
        for (i=1; i<=m; i++)
        {
            sum=sum+pow(-1, i+1)/i;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}