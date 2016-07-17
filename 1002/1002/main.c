//
//  main.c
//  1002
//
//  Created by WeiLai’s Macbook Pro on 15/11/1.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000],b[1000],c[1001];
    long int A,B;
    int i,j,n,m;
    scanf("%d",&n);
    m=1;
    while (m<=n)
    {
        scanf("%s%s",a,b);
        printf("Case %d:\n",m);
        printf("%s + %s = ",a,b);
        A=strlen(a)-1;
        B=strlen(b)-1;
        memset(c, '0', sizeof(c));
        for (i=0; A>=0||B>=0; i++)
        {
            if (A >= 0 && B >= 0)
            {
                c[i]=a[A]+b[B]+c[i]-'0'-'0';
            }
            if (A >= 0 && B<0)
            {
                c[i]=a[A]+c[i]-'0';
            }
            if (A<0 && B>=0)
            {
                c[i]=b[B]+c[i]-'0';
            }
            if (c[i]>'9')
            {
                c[i+1]='1';c[i]=c[i]-10;
            }
            A--;B--;
        }
        if (c[i]!='0')
        {
            i++;
        }
        for (j=i-1; j>=0; j--)
        {
            printf("%c",c[j]);
        }
        m++;
        if (m<=n)
        {
            printf("\n\n");
        }
        else printf("\n");
    }
    return 0;
}