//
//  main.c
//  1090
//
//  Created by WeiLai’s Macbook Pro on 15/9/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}