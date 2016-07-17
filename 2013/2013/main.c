//
//  main.c
//  2013
//
//  Created by WeiLai’s Macbook Pro on 15/9/27.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int d,a,i;
    while (scanf("%d",&d)!=EOF)
    {
        a=1;
        for (i=d-1; i>0; i--)
        {
            a=2*(1+a);
        }
        printf("%d\n",a);

    }
    return 0;
}