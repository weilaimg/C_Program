//
//  main.c
//  1406
//
//  Created by WeiLai’s Macbook Pro on 15/12/1.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//


#include <stdio.h>
int s[10001];
int main()
{
    s[6]=s[28]=s[496]=s[8128]=1;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c=0,t;
        scanf("%d%d",&a,&b);
        if(a>b){t=a;a=b;b=t;}
        for(int i=a;i<=b;i++)
            if(s[i])c++;
        printf("%d\n",c);
    }
    return 0;
}