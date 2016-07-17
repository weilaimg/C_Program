//
//  main.c
//  1218
//
//  Created by WeiLai’s Macbook Pro on 15/12/12.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char a[20][20],b[20][20];
    char t[20],d[20];
    int r,c,i,j;
    while (scanf("%s",t)!=EOF)
    {
        if (strcmp(t, "ENDOFINPUT")==0) break;
        scanf("%d%d",&r,&c);
        getchar();
        for (i=0; i<r; i++)
        {
            for (j=0; j<c; j++)
            {
                scanf("%c",&a[i][j]);
            }
            getchar();
        }
        scanf("%s",d);
        for (i=0; i<r-1; i++)
        {
            for (j=0; j<c-1; j++)
            {
                b[i][j]=(a[i][j]-'0'+a[i+1][j]-'0'+a[i][j+1]-'0'+a[i+1][j+1]-'0')/4+'0';
                printf("%c",b[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}