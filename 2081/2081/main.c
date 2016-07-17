//
//  main.c
//  2081
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,i;char a[11],b;
    scanf("%d",&n);
    while (n--)
    {
        for (i=0; i<=11; i++)
        {
            scanf("%c",&b);
            a[i]=b;
        }
        printf("6");
        for (i=7; i<=11; i++)
        {
            if (i==11)
            {
                printf("%c\n",a[i]);
            }
            else printf("%c",a[i]);
        }
    }
    return 0;
}