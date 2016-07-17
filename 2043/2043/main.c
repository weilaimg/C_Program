//
//  main.c
//  2043
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,m1,m2,m3,m4,m5;
    long int t;
    char a[100];
    while (scanf("%d",&n)!=EOF)
    {
        getchar();
        while (n--)
        {
            gets(a);
            t=strlen(a);
            m1=0,m2=0,m3=0,m4=0,m5=0;
            for (i=0; i<t; i++)
            {
                if ('a'<=a[i]&&a[i]<='z')
                {
                    m1++;
                }
                else if ('A'<=a[i]&&a[i]<='Z')
                {
                    m2++;
                }
                else if ('0'<=a[i]&&a[i]<='9')
                {
                    m3++;
                }
                else m4++;
            }
            if (m1!=0)
            {
                m5++;
            }
            if (m2!=0)
            {
                m5++;
            }
            if (m3!=0)
            {
                m5++;
            }
            if (m4!=0)
            {
                m5++;
            }
            if (t>=8&&t<=16&&m5>=3)
            {
                printf("YES\n");
            }
            else printf("NO\n");
        }
    }
    return 0;
}