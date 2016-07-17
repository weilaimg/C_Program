//
//  main.c
//  3785
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,m,i,j,x,k,a[200000];
    while (scanf("%d%d",&n,&m)!=EOF)
    {
        if (n==0&&m==0) break;
        for (i=0; i<n; i++)
            scanf("%d",&a[i]);
        if (n<m)k=n;
        else k=m;
        for (i=0; i<k; i++)
        {
            for (j=0; j<n-1-i; j++)
            {
                if (a[j]>a[j+1])
                {
                    x=a[j];
                    a[j]=a[j+1];
                    a[j+1]=x;
                }
            }
        }
        for (i=n-1; i>n-k; i--)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[n-k]);
    }
    return 0;
}