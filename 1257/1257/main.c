//
//  main.c
//  1257
//
//  Created by WeiLai’s Macbook Pro on 15/11/1.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[100],t,i,j,n;
    while (scanf("%d",&t)!=EOF)
    {
        for (i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
        }
        n=0;
        for (i=0; i<t; i++)
        {
            j=1;
            while (a[i] !=30011 && i+j<t)
            {
                if (a[i]>= a[j+i])
                {
                    a[i]=a[j+i];
                    a[j+i]=30011;
                }
                j++;
            }
            if (a[i] != 30011) n++;
        }
        printf("%d\n",n);
 /*       n=0;
        for (i=0; i<t; i++)
        {
            if (a[i] != 30011)
            {
                n++;
            }
            //printf("%d ",a[i]);
        }
         printf("%d\n",n);*/
    }
    return 0;
}

/*#include <stdio.h>
int main()
{
    int a[10000],t,i,j,n;
    while (scanf("%d",&t)!=EOF)
    {
        for (i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
        }
        n=0;
        for (i=0; i<t; i++)
        {
            j=1;
            while (a[i] !=30011 && i+j<t)
            {
                if (a[i]>= a[j+i])
                {
                    a[i]=a[j+i];
                    a[j+i]=30011;
                }
                j++;
            }
            if (a[i] != 30011) n++;
        }
        printf("%d\n",n);
    }
    return 0;
}*/
