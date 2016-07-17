//
//  main.c
//  2117
//
//  Created by WeiLai’s Macbook Pro on 15/11/6.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int p,t,a[1000][1000],n,k,l,b,c;
    scanf("%d",&p);
    while (p--)
    {
        memset(a, 0, sizeof(a));
        scanf("%d",&n);
        if (n%2!=0)
        {
            k=1;l=n/2+1;
            a[k][l]=1;
            for (t=2; t<=n*n; t++)
            {
                k-=1;l+=1;
                k<1?k=k+n:k;l<1?l=l+n:l;
                k>n?k=k-n:k;l>n?l=l-n:l;
                if (a[k][l]==0)
                {
                    a[k][l]=t;
                }
                else
                {
                    k+=2;l-=1;
                    k<1?k=k+n:k;l<1?l=l+n:l;
                    k>n?k=k-n:k;l>n?l=l-n:l;
                    a[k][l]=t;
                }
            }
            for (b=1; b<=n; b++)
            {
                for (c=1; c<=n; c++)
                {
                    printf("%4d",a[b][c]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}