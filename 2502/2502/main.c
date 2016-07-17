//
//  main.c
//  2502
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&a);
        b=pow(2, a-1);
        c=b+(b/2)*(a-1);
        printf("%d\n",c);
    }
    return 0;
}