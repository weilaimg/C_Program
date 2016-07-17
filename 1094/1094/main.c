//
//  main.c
//  1094
//
//  Created by WeiLai’s Macbook Pro on 15/9/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int x,i,sum=0;
    while(scanf("%d",&x)!=EOF)
    {
        sum=0;
        int a[x];
    for (i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d\n",sum);
        
    }
    return 0;
}