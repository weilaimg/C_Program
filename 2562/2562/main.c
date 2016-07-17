//
//  main.c
//  2562
//
//  Created by WeiLai’s Macbook Pro on 15/10/21.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include <string.h>
#include <stdio.h>
int main()
{
    int a,i;
    char c[100];
    long int n;
    scanf("%d",&a);
    getchar();
    while (a--)
    {
        gets(c);
        n=strlen(c);
        for (i=0; i<n; i++)
        {
            if (i%2==1)
            {
                c[100]=c[i];
                c[i]=c[i-1];
                c[i-1]=c[100];
            }
        }
        for (i=0; i<n; i++)
        {
            if (i<n-1)
            {
                printf("%c",c[i]);
            }
            if (i==n-1)
            {
                printf("%c\n",c[i]);
            }
            //printf("%c",c[i]);
        }
    }
    return 0;
}