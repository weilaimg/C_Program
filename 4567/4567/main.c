//
//  main.c
//  4567
//
//  Created by WeiLai’s Macbook Pro on 15/11/3.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
 int main()
 {
     int n,m,t,i,j,b,a[1000][1000];
     while (scanf("%d%d%d",&m,&n,&t)!=EOF)
     {
        for (i=0; i<m; i++)
            {
                for (j=0; j<n; j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
         
         if (t%2==0)
         {
             for (i=0; i<m; i++)
            {
                for (j=0; j<n; j++)
                {
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }
         }
         printf("\n");
     }
     return 0;
 }



