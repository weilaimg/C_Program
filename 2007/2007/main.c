//
//  main.c
//  2007
//
//  Created by WeiLai’s Macbook Pro on 15/9/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x,y,i,sum1=0,sum2=0;
    while (scanf("%d%d",&x,&y)!=EOF)
    {
        if (x>y)
        {
            for (i=y; i<=x; i++)
            {
                if (i%2==0)
                {
                    sum1=sum1+i*i;
                }
                else
                    sum2=sum2+i*i*i;
            }
        }
        else
            for (i=x; i<=y; i++)
            {
                if (i%2==0)
                {
                    sum1=sum1+i*i;
                }
                else
                    sum2=sum2+i*i*i;
            }
        printf("%d %d\n",sum1,sum2);
        sum1=0,sum2=0;
    }
    return 0;
}