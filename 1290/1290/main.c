//
//  main.c
//  1290
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int n,m;
    while (scanf("%d",&n)!=EOF)
    {
        m=(n*n*n+5*n)/6+1;
        printf("%d\n",m);
    }
    return 0;
}