//
//  main.c
//  2567
//
//  Created by WeiLai’s Macbook Pro on 15/10/23.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    long int x,y;
    char a[100],b[100];
    scanf("%d",&n);
    while (n--)
    {
        scanf("%s%s",a,b);
        x=strlen(a);
        y=strlen(b);
        for (i=0; i<x/2; i++)
        {
            printf("%c",a[i]);
        }
        for (j=0; j<y; j++)
        {
            printf("%c",b[j]);
        }
        for (i=x/2; i<x; i++)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}