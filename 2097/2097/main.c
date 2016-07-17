//
//  main.c
//  2097
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,c,d,n;
    while ((scanf("%d",&a)!=EOF)&&a!=0)
    {
        b=0,c=0,d=0;
        n=a;
        while (n)
        {
            b=b+n%16;
            n=n/16;
        }
        n=a;
        while (n)
        {
            c=c+n%12;
            n=n/12;
        }
        n=a;
        while (n)
        {
            d=d+n%10;
            n=n/10;
        }
        if (d==c&&c==b)
        {
            printf("%d is a Sky Number.\n",a);
        }
        else printf("%d is not a Sky Number.\n",a);
    }
    return 0;
}