//
//  main.c
//  2031
//
//  Created by WeiLai’s Macbook Pro on 15/10/21.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,m,n,sum,sum1,b;
    int a[100];
    while (scanf("%d%d",&m,&n)!=EOF)
    {
        if (m<0)
        {
            sum1=-m;
            b=-m;
            //printf("-");
        }
        else {sum1=m;b=m;}
        for (i=0; i<b; i++)
        {
            sum=sum1%n;
            sum1=sum1/n;
            a[i]=sum;
            if (sum==0&&sum1==0)
            {
                break;
            }
        }
        if (m<0)
        {
            printf("-");
        }
        while (i--)
        {
            if (a[i]>=0&&a[i]<=9)
            {
                printf("%d",a[i]);
            }
            if (a[i]>=10)
            {
                printf("%c",a[i]+'A'-10);
            }
                    }
        printf("\n");
    }
    return 0;
}