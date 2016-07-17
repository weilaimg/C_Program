//
//  main.c
//  2055
//
//  Created by WeiLai’s Macbook Pro on 15/10/23.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t;
    char c;
    int n;
    scanf("%d",&t);
    getchar();
    while (t--)
    {
        scanf("%c%d",&c,&n);
        getchar();
        
        if (c>='A'&&c<='Z')
        {
            printf("%d\n",c-'A'+1+n);
        }
        if (c>='a'&& c<='z')
        {
            printf("%d\n",-1*(c-'a'+1)+n);
        }
    }
    return 0;
}