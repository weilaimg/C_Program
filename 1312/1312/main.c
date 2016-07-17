//
//  main.c
//  1312
//
//  Created by WeiLai’s Macbook Pro on 15/11/8.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char a[25][25];
int m,n;
double sum;
int b[4][2]={{1,0},{-1,0},{0,1},{-0,-1}};
double f(int x,int y)
{
    int xx,yy,i;
//    sum=0;
    sum++;
    for (i=0; i<4; i++)
    {
        xx=x+b[i][0];
        yy=y+b[i][1];
        if (xx<0||yy<0||xx>=m||yy>=n||a[xx][yy]=='#')
        {
            continue;
        }
        a[xx][yy]='#';
        
        f(xx, yy);
    }
    return (sum);
}

int main()
{
    int i,j;
    double l;
    l=1;
    while (scanf("%d%d",&n,&m)!=EOF)
    {
        if (m==0&&n==0)
        {
            break;
        }
        sum=0;
        getchar();
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                scanf("%c",&a[i][j]);
            }
            getchar();
        }
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                if (a[i][j]=='@')
                {
                   // printf("%c",a[i][j]);
                    a[i][j]='.';
                    l=f(i, j);
                }
            }
        }
       // printf("%d",l+1);
        printf("%.0lf\n",l-1);
    }
}