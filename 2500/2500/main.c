//
//  main.c
//  2500
//
//  Created by WeiLai’s Macbook Pro on 15/10/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include <stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&m);
        for (i=0; i<m; i++)
        {
            printf("HDU");
        }
        printf("\n");
        for (j=1; j<m*3; j++)
        {
            for (i=0; i<m; i++)
            {
                printf("HDU");
            }
            printf("\n");
        }
    }
    return 0;
}