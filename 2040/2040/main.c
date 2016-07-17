//
//  main.c
//  2040
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,i,j,sum1,sum2,n;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d%d",&a,&b);
        sum1=0;
        for (i=1; i<a; i++)
        {
            if (a%i==0)
            {
                sum1+=i;
            }
        }
        sum2=0;
        for (j=1; j<b; j++)
        {
            if (b%j==0)
            {
                sum2+=j;
            }
        }
        if (sum1==b&&a==sum2)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}