//
//  main.c
//  2016
//
//  Created by WeiLai’s Macbook Pro on 15/10/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,a,min,c[100],i,t=100;
    while ((scanf("%d",&n)!=EOF)&&n!=0)
    {
            for (i=0; i<n; i++)
            {
                scanf("%d",&c[i]);
            }
            min=c[0];
            for (i=0; i<n; i++)
            {
                if (min>=c[i])
                {
                    min=c[i];
                    a=i;
                }
            }
           // printf("%d",min);
        c[t]=c[0];
        c[0]=c[a];
        c[a]=c[t];
        for (i=0; i<n; i++)
        {
            if (i==0) {
                printf("%d",c[i]);
            }
            else printf(" %d",c[i]);
        }
        printf("\n");
    }
    return 0;
}