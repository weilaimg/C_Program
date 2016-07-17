//
//  main.c
//  1095
//
//  Created by WeiLai’s Macbook Pro on 15/9/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,sum;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        sum=a+b;
        printf("%d\n\n",sum);
    }
    return 0;
}