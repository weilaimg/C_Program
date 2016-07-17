//
//  main.c
//  1860
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,t,k=100000;
    char a[10],b[120];
    while(k--)
    {
        gets(a);
    gets(b);
    if (a[0]=='#')
    {
        break;
    }
    else
    {
        for (i=0; a[i]!='\0'; i++)
        {
            t=0;
            for (j=0; b[j]!='\0'; j++)
            {
                if (a[i]==b[j])
                {
                    t++;
                }
            }
            printf("%c %d\n",a[i],t);
        }
    }
    }
    return 0;
}