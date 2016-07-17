//
//  main.c
//  1556
//
//  Created by WeiLai’s Macbook Pro on 15/12/8.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int t[100010];
int main()
{
    long long int n;
    long long int a,b;
    while (scanf("%lld",&n)!=EOF)
    {
        long long int d=n;
         memset(t, 0, sizeof(t));
        if (n==0) {
            break;
        }
        while (d--)
        {
            scanf("%lld%lld",&a,&b);
            for (long long int i=a; i<=b; i++)
            {
                t[i]++;
            }
        
        }
        for (long long int i=1; i<=d; i++)
        {
            printf("%d",t[i]);
        }
    }
    return 0;
}