//
//  main.c
//  2030
//
//  Created by WeiLai’s Macbook Pro on 15/10/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int b,n,i;
    long int m;
    scanf("%d",&n);
    getchar();
    while (n--)
    {
        gets(a);
        m=strlen(a);
        b=0;
        for (i=0; i<m; i++)
        {
            if (a[i]<0)
            {
                b+=1;
            }
        }
        printf("%d\n",b/3);
    }
    return 0;
}