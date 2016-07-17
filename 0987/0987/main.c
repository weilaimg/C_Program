//
//  main.c
//  0987
//
//  Created by WeiLai’s Macbook Pro on 15/11/3.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
/*
#include <stdio.h>
int main()
{
    int n,i,j,k,sum,m;
    int a[1000],b[1000];
    while (scanf("%d",&n)!=EOF)
    {
        for (int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        k=0,sum=0;
        for (j=1; j<=n; j++)
        {
            m=0;
            for (i=2; i<a[j]; i++)
            {
                if (a[j]%i==0)
                {
                    m++;
                }
            }
            if (m==0&&a[j]!=1)
            {
                b[k]=j;
                k++;
                sum=sum+a[j];
            }
        }
        if (k!=0)
        {
            printf("%d %d\n",sum,k);
            for (i=0; i<k; i++)
            {
                printf("%d ",b[i]);
            }
        }
        else printf("nothing");
        printf("\n");
    }
    return 0;
}*/


#include <stdio.h>
#include <string.h>
int main()
{
    char a[110],b[110],c[110],d;
    long int e,f,l,m;
    while (scanf("%s%s",a,b)!=EOF)
    {
        e=strlen(a);
        f=strlen(b);
        l=0;
        for (int i=0; i<e; i++)
        {
            for (int j=0; j<f; j++)
            {
                if (a[i]==b[j])
                {
                    c[l]=a[i];
                    l++;
                }
            }
        }
        m=l-1;
        while (m>-1)
        {
            for (int i=1; i<l; i++)
            {
                if (c[i]<c[i-1])
                {
                    d=c[i];
                    c[i]=c[i-1];
                    c[i-1]=d;
                }
            }
            m--;
        }
        if (l==0)
        {
            printf("nothing");
        }
        else
        {
            for (int i=0; i<=l; i++)
            {
                if (c[i]==c[i+1])
                {
                    continue;
                }
                else printf("%c",c[i]);
            }
        }
        printf("\n");
    }
    return 0;
}


/*
#include <stdio.h>
#include <string.h>
int main()
{
    int a[1000][1000],b[1000][1000],m,n,t,i,j,k,c,d,g;
    while (scanf("%d%d%d",&m,&n,&t)!=EOF)
    {
        for (i=0; i<n; i++)
        {
            for (j=0; j<m; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        c=0;
        for (i=1; i<=t; i++)
        {
            for (j=0; j<m; j++)
            {
                d=0;k=0;
                while (n-k)
                {
                    b[c][d]=a[n-k][j];
                    d++;k++;
                }
                c++;
            }
            g=m;m=n;n=g;
        }
        for (i=0; i<=c; i++)
        {
            for (j=0; j<d-1; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
         }//printf("%d %d",c,d);
        
    }
    return 0;
}*/