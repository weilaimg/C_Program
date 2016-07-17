//
//  main.c
//  2161
//
//  Created by WeiLai’s Macbook Pro on 15/12/7.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,n=1;
    while (scanf("%d",&a)!=EOF)
    {
        int flag=1;;
        if (a<=0) break;
        printf("%d: ",n);
        n++;
        if (a==1||a==2)
        {
            printf("no\n");
            continue;
        }
        for (int i=2; i<a; i++)
        {
            if (a%i==0) {
                flag=0;
            }
        }
        if (flag==1)
        {
            printf("yes\n");
        }
        else printf("no\n");
    }
}