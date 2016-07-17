//
//  main.c
//  2026
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i;
    long int n;
    while (gets(a))
    {
        printf("%c",a[0]-32);
    n=strlen(a);
    for (i=1; i<n; )
    {
        if (a[i]==' ')
        {
            printf(" ");
            i++;
            printf("%c",a[i]-32);
            i++;
        }
        else
        {
            printf("%c",a[i]);
            i++;
        }
    }
        printf("\n");
    }
    return 0;
}