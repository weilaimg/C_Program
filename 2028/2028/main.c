//
//  main.c
//  2028
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,i,a[100],j;
    while (scanf("%d",&n)!=EOF)
    {
        j=0;
        for (i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (j<a[i])
            {
                j=a[i];
            }
        }
            for (i=0; i<n; i++)
            {
                if (j%a[i] != 0)
                {
                    j++;
                    i=-1;
                }
            }
            printf("%d\n",j);
        
    }
    return 0;
}