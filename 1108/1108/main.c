//
//  main.c
//  1108
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b;
    long long int j;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        for (j=1; j<100000000; j++)
        {
            if (j%a==0&j%b==0)
            {
                break;
            }
        }
        printf("%lld\n",j);
    }
    return 0;
}