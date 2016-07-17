//
//  main.c
//  1241
//
//  Created by WeiLai’s Macbook Pro on 15/11/8.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
/*
#include <stdio.h>
#include <string.h>
char a[1000][1000];
int f(int x,int y)
{
    if (a[x-1][y]=='@')
    {
        a[x-1][y]='*';
        f(x-1, y);
    }
    if (a[x-1][y-1]=='@')
    {
        a[x-1][y-1]='*';
        f(x-1, y-1);
    }
    if (a[x][y-1]=='@')
    {
        a[x][y-1]='*';
        f(x, y-1);
    }
    if (a[x+1][y-1]=='@')
    {
        a[x+1][y-1]='*';
        f(x+1, y-1);
    }
    if (a[x+1][y]=='@')
    {
        a[x+1][y]='*';
        f(x+1, y);
    }
    if (a[x+1][y+1]=='@')
    {
        a[x+1][y+1]='*';
        f(x+1, y+1);
    }
    if (a[x][y+1]=='@')
    {
        a[x][y+1]='*';
        f(x, y+1);
    }
    if (a[x-1][y+1]=='@')
    {
        a[x-1][y+1]='*';
        f(x-1, y+1);
    }
    return 0;
}

int main()
{
    int m,n,i,j,t;
    while (scanf("%d%d",&m,&n)!=EOF)
    {
        if (m==0)break;
        t=0;
        getchar();
        memset(a, '*', sizeof(a));
        for (i=1; i<=m; i++)
        {
            for (j=1; j<=n; j++)
            {
                scanf("%c",&a[i][j]);
            }
            getchar();
        }
       for (i=1; i<=m; i++)
        {
            for (j=1; j<=n; j++)
            {
                if (a[i][j]=='@')
                {
                    a[i][j]='*';
                    f(i, j);
                    t++;
                }
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
*/
#include<stdio.h>
char maps[110][110];
int n,m;
int ss[8][2]= {{-1,0},{1,0},{0,1},{0,-1},{-1,1},{-1,-1},{1,1},{1,-1}};
void yxc(int x,int y)
{
    int i,six,siy;
    for(i=0; i<8; i++){
        six=x+ss[i][0];
        siy=y+ss[i][1];
        if(six<0||siy<0||siy>=m||six>=n||maps[six][siy]=='*')
            continue;
        maps[six][siy]='*';
        yxc(six,siy);
    }
}
int main()
{
    
    int i,j,flag;
    while(scanf("%d%d",&n,&m)!=EOF){
        flag=0;
        if(n==0&&m==0) break;
        for(i=0;i<n;i++)
            scanf("%s",maps[i]);
        
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(maps[i][j]=='@')
                {
                    yxc(i,j);
                    ++flag;
                }
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}