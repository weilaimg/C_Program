//
//  main.c
//  2561
//
//  Created by WeiLai’s Macbook Pro on 15/10/23.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,t,i,a[100],m;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&t);
        for (i=1; i<=t; i++)
        {
            scanf("%d",&a[i]);
        }
        for (i=2; i<=t; i++)
        {
            if (a[i]>a[i-1])
            {
                m=a[i];
                a[i]=a[i-1];
                a[i-1]=m;
            }
        }
        for (i=3; i<=t; i++)
        {
            if (a[i]>a[i-1])
            {
                m=a[i];
                a[i]=a[i-1];
                a[i-1]=m;
            }
        }
        printf("%d\n",a[t-1]);
    }
    return 0;
}