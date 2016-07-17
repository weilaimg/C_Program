//
//  main.c
//  1877
//
//  Created by WeiLai’s Macbook Pro on 15/10/27.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int m,a,b,c,num[10000],k,i;
    while ((scanf("%d",&m)!=EOF)&&m!=0)
    {
        scanf("%d%d",&a,&b);
        c=a+b;
        for (i=0; ; i++)
        {
            num[i]=c%m;
            c=c/m;
            if (c==0)
            {
                break;
            }
        }
        for (k=i; k>=0; k--)
        {
            printf("%d",num[k]);
        }
        printf("\n");
    }
    return 0;
}