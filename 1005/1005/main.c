//
//  main.c
//  1005
//
//  Created by WeiLai’s Macbook Pro on 15/11/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int a[100];
int main()
{
    a[1]=1;a[0]=1;
    int n,b,c,i;
    while (scanf("%d%d%d",&c,&b,&n)!=EOF)
    {
        if (n==0&&b==0&&c==0)
        {
            break;
        }
        if (n==1||n==2)
        {
            printf("1");
        }
        else
        {
            for (i=2; i<50; i++)
            {
                a[i]=(c*a[i-1]+b*a[i-2])%7;
            }
            printf("%d",a[(n-1)%49]);
        }
        printf("\n");
    }
    return 0;
}