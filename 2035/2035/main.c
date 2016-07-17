//
//  main.c
//  2035
//
//  Created by WeiLai’s Macbook Pro on 15/10/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,d,c;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        if (a==0&&b==0)
        {
            break;
        }
        c=a;
        if (b==1)
        {
            printf("%d\n",a%1000);
        }
        else
        {for (int i=2; i<=b; i++)
        {
            c=c%1000;
            c=a*c;
            d=c%1000;
        }
            printf("%d\n",d);}
    }
    return 0;
}