//
//  main.c
//  2024
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,sum;
    char a[100];
    long int b;
    scanf("%d",&n);
    getchar();
    while (n--)
    {
        gets(a);
        b=strlen(a);
        if ((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||(a[0]=='_'))
        {
            sum=0;
            for (i=1; i<b; i++)
            {
                if ((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9')||a[i]=='_')
                {
                    sum+=0;
                }
                else sum+=1;
            }
            if (sum==0)
            {
                printf("yes\n");
            }
            else printf("no\n");
        }
        else printf("no\n");

    }
    return 0;
}