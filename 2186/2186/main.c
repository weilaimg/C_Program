//
//  main.c
//  2186
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int m,a,b,c;
        scanf("%d",&m);
        a=m/2;
        b=2*(m-a)/3;
        c=m-b-a;
        int sum1=0,sum2=0,sum3=0;
        if (a%10==0)
        {
            sum1=a/10;
        }
        else
            sum1=a/10+1;
        if (b%10==0)
        {
            sum2=b/10;
        }
        else
            sum2=b/10+1;
        if (c%10==0)
        {
            sum3=c/10;
        }
        else
            sum3=c/10+1;
        printf("%d\n",sum1+sum2+sum3);
    }
    return 0;
}