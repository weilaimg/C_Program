//
//  main.c
//  2037
//
//  Created by WeiLai’s Macbook Pro on 15/11/26.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
struct ac
{
    int a;
    int b;
};

int main()
{
    struct ac a[1000];
    int n,i,j,min,sum;
    while (scanf("%d",&n)!=EOF)
    {
        sum=1;
        if (n==0)
        {
            break;
        }
        for (i=0; i<n; i++)
        {
            scanf("%d%d",&a[i].a,&a[i].b);
        }
        for (i=0; i<n; i++)
        {
            for (j=1; j<n; j++)
            {
                if (a[j-1].b>a[j].b)
                {
                    a[103]=a[j-1];
                    a[j-1]=a[j];
                    a[j]=a[103];
                }
            }
        }
        min=a[0].b;
        for (i=1; i<n; i++)
        {
            if (a[i].a >= min)
            {
                min=a[i].b;
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}