//
//  main.c
//  1555
//
//  Created by WeiLai’s Macbook Pro on 15/12/1.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int m,n,i;
    while (scanf("%d%d",&m,&n)!=EOF)
    {
        if (m==0&&n==0) break;
        for (i=1; m!=0;i++ )
        {
            m-=1;
            if (i%n==0)m+=1;
        }
        printf("%d\n",i-1);
    }
    return 0;
}