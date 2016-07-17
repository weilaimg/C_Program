//
//  main.c
//  1562
//
//  Created by WeiLai’s Macbook Pro on 15/10/27.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,c,n,i,h[100],t;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        t=0;
        for(i=1000;i<=9999;i++)
        {
            if(i%a==0&&(i+1)%b==0&&(i+2)%c==0)
            {
                t++;
                h[t]=i;
                break;
            }
        }
        if (t==0)
        {
            printf("Impossible");
        }
        else
        {
            printf("%d",h[1]);
            /*for(i=t;i>0;i--)
            {
                if(i==1)
                {
                    printf("%d",h[t]);
                }
                else
                {
                    printf(" %d",h[t]);
                }
            }*/
        }
        printf("\n");
    }
    return 0;
}
