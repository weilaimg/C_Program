//
//  main.c
//  2107
//
//  Created by WeiLai’s Macbook Pro on 15/10/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,i,a[100];
    while ((scanf("%d",&n)!=EOF)&&n!=0)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (i=1; i<n; i++)
        {
            if (a[i]<a[i-1])
            {
                a[100]=a[i];
                a[i]=a[i-1];
                a[i-1]=a[100];
            }
        }
        printf("%d\n",a[n-1]);
    }
    return 0;
}