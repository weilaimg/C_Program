//
//  main.c
//  1096
//
//  Created by WeiLai’s Macbook Pro on 15/9/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int d[10000000];
int main ()
{
    int a;
    scanf("%d",&a);
    while (a--)
    {
        int b;
        scanf("%d",&b);
        int sum=0;
        while (b--)
        {
            int e;
            scanf("%d",&e);
            sum+=e;
            
        }
        if (a!=0)
        {
            printf("%d\n\n",sum);
        }
        else
            printf("%d\n",sum);
    }
    return 0;
}