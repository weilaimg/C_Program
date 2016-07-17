//
//  main.c
//  2524
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{   int i;
    int a[105];
    a[0]=0;
    for (i=1; i<=105; i++)
    {
        a[i]=a[i-1]+i;
    }
    int m,n,t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&m,&n);
        printf("%d\n",a[n]*a[m]);
    }
    return 0;
}