//
//  main.c
//  2015
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF)
    {
        int i,b=0,a=0,sum=0;
        for (i=1;i<=n;i++)
        {
            b++;a+=2;
            sum+=a;
            if (i==n)
            {
                printf("%d\n",sum/b);
            }
            else if (b==m)
                {
                    printf("%d ",sum/m);
                    b=0;sum=0;
                }
        }
    }
    return 0;
}