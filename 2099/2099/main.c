//
//  main.c
//  2099
//
//  Created by WeiLai’s Macbook Pro on 15/10/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,k[100],i,j,c[100],d,e;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        if (a==0&&b==0) break;
        for (i=0; i<100; i++)
        {
            k[i]=i;
        }
        d=0;
        for (j=0; j<100; j++)
        {
            if ((a*100+k[j])%b==0)
            {
                c[d]=k[j];
                d++;
                //printf("%d ",k[j]);
            }
            
        }
        for (e=0; e<d; e++)
        {
            if (e==0)
            {
                if (c[e]>=0&&c[e]<=9)
                {
                    printf("0%d",c[e]);
                }
                else printf("%d",c[e]);
            }
            else
            {   if (c[e]>=0&&c[e]<=9)
                {
                    printf(" 0%d",c[e]);
                }
                else
                    printf(" %d",c[e]);
            }
        }
        printf("\n");
    }
    return 0;
}