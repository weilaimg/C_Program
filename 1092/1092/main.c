//
//  main.c
//  1092
//
//  Created by WeiLai’s Macbook Pro on 15/9/23.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
        if (x) {
           
    {
        int a[x],i;
        for (i=0; i<x; i++)
        {
            scanf("%d",&a[i]);
        }
        int t=0;
        for (i=0; i<x; i++)
        {
            t=a[i]+t;
        }
        printf("%d\n",t);
    }
        }
    
    return 0;
}