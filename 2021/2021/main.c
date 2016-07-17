//
//  main.c
//  2021
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,a[100],i,sum;
    while ((scanf("%d",&n)!=EOF)&&n!=0)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sum=0;
        for (i=0; i<n; i++)
        {
            sum+=a[i]/100;
            sum+=(a[i]%100)/50;
            sum+=(a[i]%100%50)/10;
            sum+=(a[i]%100%50%10)/5;
            sum+=(a[i]%100%50%10%5)/2;
            sum+=(a[i]%100%50%10%5%2);
        }
        printf("%d\n",sum);
    }
    return 0;
}