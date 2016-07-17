//
//  main.c
//  2520
//
//  Created by WeiLai’s Macbook Pro on 15/11/7.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t,n,k,l;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        k=0;
        for (int i=1; i<=n; i++)
        {
            l=1+2*(i-1);
            k+=l;
            k%=10000;
        }
        printf("%d\n",k);
    }
    return 0;
}

