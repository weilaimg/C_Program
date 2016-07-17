//
//  main.c
//  2140
//
//  Created by WeiLai’s Macbook Pro on 15/11/18.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char a[10]={'b','q','t','m','i','c','a','e','l'};
    char b[10]={' ',',','!','l','e','a','c','i','m'};
    char c[10010];
    int i,j,n;
    while (1)
    {
        gets(c);
        for (i=0; c[i]!='\0'; i++)
        {   n=0;
            for (j=0; a[j]!='\0'; j++)
            {
                if (a[j]==c[i])
                {
                    printf("%c",b[j]);
                    n=1;
                }
            }
            if (n!=1)
            {
                printf("%c",c[i]);
            }
        }
        printf("\n");
    }
    return 0;
}