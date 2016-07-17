//
//  main.c
//  2010
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int m,n,a,b,c,i,count=0;
    while (scanf("%d %d",&m,&n)!=EOF)
    {
        for (i=m; i<=n; i++)
        {
            a=i/100;
            b=(i-a*100)/10;
            c=i-a*100-b*10;
            if (i==a*a*a+b*b*b+c*c*c)
            {
                count+=1;
                if (count==1)
                {
                    printf("%d",i);
                }
                if (count!=1)
                {
                    printf(" %d",i);
                }
            }
        }
        if (count==0)
        {
            printf("no");
        }
        printf("\n");
        count=0;
    }
    return 0;
}