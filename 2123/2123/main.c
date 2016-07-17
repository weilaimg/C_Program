//
//  main.c
//  2123
//
//  Created by WeiLai’s Macbook Pro on 15/12/8.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int k;
        scanf("%d",&k);
        for (int i=1; i<=k; i++)
        {
            for (int j=1; j<=k; j++)
            {
                if (j==1)printf("%d",i*j);
                else printf(" %d",i*j);
            }
            printf("\n");
        }
    }
    return 0;
}