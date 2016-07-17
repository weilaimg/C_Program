//
//  main.c
//  3782
//
//  Created by WeiLai’s Macbook Pro on 15/12/9.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,n;
    while (scanf("%d",&a)!=EOF)
    {
        n=0;
        if (a<=0) {
            break;
        }
        while (a!=1)
        {
            if (a%2==0)
            {
                a=a/2;
                n++;
            }
            else {a=(3*a+1)/2;n++;}
            
        }
        printf("%d\n",n);
    }
    return 0;
}