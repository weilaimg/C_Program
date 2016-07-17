//
//  main.c
//  2131
//
//  Created by WeiLai’s Macbook Pro on 15/12/7.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char c,ch[1100];
    while (scanf("%c %s",&c,ch)!=EOF)
    {
        getchar();
    long long int l;
    l=strlen(ch);
    double m=0;
    for (int i=0; i<l; i++)
    {
        if (c==ch[i]||c==ch[i]+'a'-'A'||c==ch[i]-('a'-'A')) m++;
    }
    printf("%.5lf\n",m/l);
    }
    return 0;
}