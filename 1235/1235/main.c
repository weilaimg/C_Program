//
//  main.c
//  1235
//
//  Created by WeiLai’s Macbook Pro on 15/12/1.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int a[1200],b[1200];
    int n,m;
    
    while (scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        
        memset(b, 0, sizeof(b));
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        scanf("%d",&m);
        printf("%d\n",b[m]);
    }
    return 0;
}