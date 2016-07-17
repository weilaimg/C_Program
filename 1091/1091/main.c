//
//  main.c
//  1090
//
//  Created by WeiLai’s Macbook Pro on 15/9/22.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        
        if (a==0&b==0)
        {
            return 0;
        }
        printf("%d\n",a+b);
    }
    return 0;
}
