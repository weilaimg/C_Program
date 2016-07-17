//
//  main.c
//  1408
//
//  Created by WeiLai’s Macbook Pro on 15/12/1.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,i,a,b;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        n=0;
        for (i=b; a>0; i+=b)
        {
            a=a-i;
            n+=i/b+1;
        }
        printf("%d\n",n-1);
    }
    return 0;
}

