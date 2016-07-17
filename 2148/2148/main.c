//
//  main.c
//  2148
//
//  Created by WeiLai’s Macbook Pro on 15/12/7.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t,m,k;
    int a[1010];
    scanf("%d",&t);
    while (t--)
    {
        int sum=0;
        scanf("%d%d",&m,&k);
        for (int i=1; i<=m; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=1; i<=m; i++)
        {
            if (a[i]>a[k]) sum++;
        }
        printf("%d\n",sum);
    }
}