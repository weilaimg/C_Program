//
//  main.c
//  2163
//
//  Created by WeiLai’s Macbook Pro on 15/11/18.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,j,b,c=1,m;
    for(m=0;m<100;m++)
    {
        char a[100];
        gets(a);
        if(strcmp(a,"STOP")==0)
            break;
        l=strlen(a);
        b=0;
        for(i=0,j=l-1;i<=l/2;i++,j--)
        {
            if(a[i]!=a[j])
                b=1;
        }
        if(b==0)
        {
            printf("#%d: YES\n",c);
            c++;
        }
        else
        {
            printf("#%d: NO\n",c);
            c++;
        }
    }
    return 0;
}
