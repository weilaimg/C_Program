//
//  main.c
//  1021
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a=7,b=11;
        if(n==0||n==1)
        {printf("no\n");  continue;}
        
        int sum=0;
        for(int i=2;i<=n;i++)
        {
            sum=(a%3+b%3)%3;
            a=b%3;
            b=sum;
        }
        if(sum==0)  printf("yes\n");
        else         printf("no\n");
    }
    return 0;
}