//
//  main.c
//  2012
//
//  Created by WeiLai’s Macbook Pro on 15/9/29.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,y,sum,a,i;
    while (scanf("%d %d",&x,&y)!=EOF&&(x!=0||y!=0))
    {
        a=0;
        for (i=x; i<=y; i++)
        {
            sum=pow(i, 2)+i+41;
            for (n=2; n<sum; n++)
            {
                if (sum%n==0)
                {
                    a+=1;
                }
                if (sum%n!=0)
                {
                    a+=0;
                }
            }
        }
        if (a==0)
        {
            printf("OK\n");
        }
        else printf("Sorry\n");
    }
    return 0;
}