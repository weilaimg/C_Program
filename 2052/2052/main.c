//
//  main.c
//  2052
//
//  Created by WeiLai’s Macbook Pro on 15/10/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    char a[100][100];
    int c,b,i,j,m,n;
    while (scanf("%d%d",&c,&b)!=EOF)
    {
        n=b+2;
        m=c+2;
        for (i=1; i<=n; i++)
        {
            for (j=1; j<=m; j++)
            {
                if (i==1&&j==1)
                {
                    a[i][j]='+';
                }
                else if (i==1&&j==m)
                    a[i][j]='+';
                else if (i==n&&j==1)
                    a[i][j]='+';
                else if (i==n&&j==m)
                    a[i][j]='+';
                else if (j==1||j==m)
                    a[i][j]='|';
                else if (i==1||i==n)
                    a[i][j]='-';
                else a[i][j]=' ';
            }
        }
        for (i=1; i<=n; i++)
        {
            for (j=1; j<=m; j++)
            {
                if (j==m)
                {
                    printf("%c",a[i][j]);
                    printf("\n");
                }
                else printf("%c",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}