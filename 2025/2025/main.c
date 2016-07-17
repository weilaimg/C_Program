//
//  main.c
//  2025
//
//  Created by WeiLai’s Macbook Pro on 15/10/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],max;
    int c;
    long int b;
    while (scanf("%s",&a)!=EOF)
    {
        b=strlen(a);
        max=a[0];
        for (c=0; c<b; c++)
        {
            if (max<=a[c])
            {
                max=a[c];
            }
        }
        for (c=0; c<b; c++)
        {
            if (max==a[c])
            {
                printf("%c",a[c]);
                printf("(max)");
            }
            else printf("%c",a[c]);
        }
        printf("\n");
    }
    return 0;
}