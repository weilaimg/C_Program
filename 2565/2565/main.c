//
//  main.c
//  2565
//
//  Created by WeiLai’s Macbook Pro on 15/10/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,i,j,t;
    char a[100][100];
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if (j==i||j==n-1-i)
                {
                    a[i][j]='X';
                }
                else a[i][j]=' ';
            }
        }
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                printf("%c",a[i][j]);
                if (n-i-1>i)
                {
                    if (j==n-1-i)
                    {
                        printf("\n");
                        break;
                    }
                }
                else if (n-i-1<=i)
                {
                    if (j==i)
                    {
                        printf("\n");
                        break;
                    }
                }
            }
        }
        printf("\n");

    }
    return 0;
}