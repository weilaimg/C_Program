//
//  main.c
//  2029
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    long int n;
    int i,b=0,c;
    char a[100];
    scanf("%d",&c);
    getchar();
    while (c--)
    {
        //getchar();
        gets(a);
        n=strlen(a);
        b=0;
        for (i=0; i<n; i++)
        {
            if (a[i]==a[n-1-i])
            {
                b+=0;
            }
            else b+=1;
        }
        if (b==0)
        {
            printf("yes\n");
        }
        else printf("no\n");

    }
    return 0;
}