//
//  main.c
//  2075
//
//  Created by WeiLai’s Macbook Pro on 15/10/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d%d",&a,&b);
        if (a%b==0)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}