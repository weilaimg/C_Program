//
//  main.c
//  2020
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include <stdio.h>
int main()
{
    int a,b[100],i,min,c,j;
    while ((scanf("%d",&a)!=EOF)&&a!=0)
    {
        for (i=0; i<a; i++)
        {
            scanf("%d",&b[i]);
        }
        for (i=0; i<a; i++)
        {
            min=b[0];
            for (j=0; j<a; j++)
            {
                if (min*min<=b[j]*b[j])
                {
                    min=b[j];
                    c=j;
                }
            }
            if (i==0) {
                printf("%d",min);
                b[c]=0;
            }
            else
            {
                printf(" %d",min);
                b[c]=0;
            }
        }
        printf("\n");
    }
    return 0;
}
