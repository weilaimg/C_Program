//
//  main.c
//  2051
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,a[1000],i;
    while (scanf("%d",&n)!=EOF)
    {
        i=0;
        while (n)
        {
            a[i]=n%2;
            n=n/2;
            i++;
        }
        for (int j=i-1; j>=0; j--)
        {
            printf("%d",a[j]);
        }
        printf("\n");
    }
    return 0;
}