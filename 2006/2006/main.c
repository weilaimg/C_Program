//
//  main.c
//  2006
//
//  Created by WeiLai’s Macbook Pro on 15/9/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,sum=1;
    while (scanf("%d",&a)!=EOF)
    {
        while (a--)
        {
            int b;
            scanf("%d",&b);
            if (b%2!=0)
            {
                sum*=b;
            }
            else
                b=1;
        }
        printf("%d\n",sum);
        sum=1;
    }
    
    return 0;
}