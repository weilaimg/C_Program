//
//  main.c
//  1020
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t,i,n;
    char a[10010];
    scanf("%d",&t);
    while (t--)
    {
        n=1;
        getchar();
        scanf("%s",a);
        for (i=1; a[i]!='\0'; i++)
        {
            if (a[i]==a[i-1])
            {
                n++;continue;
            }
            else
            {
                if (n==1)
                {
                    printf("%c",a[i-1]);
                }
                else
                    printf("%d%c",n,a[i-1]);
                n=1;
            }
        }
        
        if (n==1)
        {
            printf("%c",a[i-1]);
        }
        else
            printf("%d%c",n,a[i-1]);
        printf("\n");
    }
    return 0;
}