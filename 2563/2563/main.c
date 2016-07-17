//
//  main.c
//  2563
//
//  Created by WeiLai’s Macbook Pro on 15/11/18.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char a[100][100];
int f(int t,int x,int y)
{
    int n=0;
    if (t==1)
    {
        n++;
    }
    if (t!=1)
    {
        if (a[x-1][y]=='*')
        {
            a[x-1][y]='@';
            t--;n++;
            f(t,x-1,y);
        }
        if (a[x][y-1]=='*')
        {
            a[x][y-1]='@';
            t--;n++;
            f(t,x,y-1);
        }
        if (a[x][y+1]=='*')
        {
            a[x][y+1]='@';
            t--;n++;
            f(t,x,y+1);
        }
    }
    return n;
}
int main()
{
    memset(a,'*',sizeof(a));
    int t,k;
    while (scanf("%d",&t)!=EOF)
    {
        k=f(t, 50, 50);
        printf("%d",k);
    }
    return 0;
}