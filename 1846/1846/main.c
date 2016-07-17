//
//  main.c
//  1846
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int m,n,k;
    scanf("%d",&k);
    while (k--)
    {
        scanf("%d%d",&m,&n);
       m%(n+1)==0?printf("second\n"):printf("first\n");
    }
    return 0;
}