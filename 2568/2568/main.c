//
//  main.c
//  2568
//
//  Created by WeiLai’s Macbook Pro on 15/10/23.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t,n,k;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        k=0;
        while (n)
        {
            if (n%2==1)
            {
                n-=1;
                k+=1;
            }
            else n/=2;
        }
        printf("%d\n",k);
    }
    return 0;
}