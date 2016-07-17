//
//  main.c
//  1040
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t,n,a[1010],m;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int j=n; j>0; j--)
        {
            for (int i=1; i<j; i++)
            {
                if (a[i]>a[i-1])
                {
                    m=a[i];
                    a[i]=a[i-1];
                    a[i-1]=m;
                }
            }
        }
        for (int i=n-1; i>=0; i--)
        {
            if (i!=0)
            {
                printf("%d ",a[i]);
            }
            if (i==0)
            {
                printf("%d",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}