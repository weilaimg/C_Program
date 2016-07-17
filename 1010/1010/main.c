//
//  main.c
//  1010
//
//  Created by WeiLai’s Macbook Pro on 15/12/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include<stdio.h>
int main()
{
    int a,b,c,t;
    for(a=1;a<=9;a++)
        for(b=0;b<=9;b++)
            for(c=0;c<=9;c++)
            {
                if(a!=b&&b!=c&&c!=a&&(a*100+b*10+c)%2==0)
                {  t=(a*100+b*10+c);
                
                printf("%d   ",t);
                }
            }
    printf("\n");
    return 0;
}