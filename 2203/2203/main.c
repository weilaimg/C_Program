//
//  main.c
//  2203
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char a[200020],b[100010],c[100010];
int main()
{
    while (scanf("%s%s",a,c)!=EOF)
    {
        strcpy(b, a);
        strcat(a, b);
        if (strstr(a, c)!=0)
        {
            printf("yes");
        }
        else printf("no");
        printf("\n");
    }
    return 0;
}