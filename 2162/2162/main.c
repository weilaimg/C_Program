//
//  main.c
//  2162
//
//  Created by WeiLai’s Macbook Pro on 15/12/7.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t,a=1;
    while (scanf("%d",&t)!=EOF)
    {
        if (t<0)
        {
            break;
        }
        
        int sum=0,k;
        for (int i=1; i<=t; i++)
        {
            scanf("%d",&k);
            sum+=k;
        }
        printf("Sum of #%d is ",a);
        printf("%d\n",sum);
        a++;
    }
    return 0;
}