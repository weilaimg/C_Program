//
//  main.c
//  2091
//
//  Created by WeiLai’s Macbook Pro on 15/10/21.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    char c;
    int n,i,j,k,l=0;
    while ((scanf("%c",&c)&&c!='@'&&scanf("%d",&n)!=EOF))
    {
        if (l!=0)
        {
            printf("\n");
        }
        getchar();
        for (j=1; j<n; j++)
        {
            for (i=1; i<=2*n-1;i++)
            {
                if (i==n-(j-1)||i==n+(j-1))
                {
                    printf("%c",c);
                }
                else if (i>0&&i<n+(j-1)&&i!=n-(j-1))
                {printf(" ");}
                if (i==n+(j-1))
                {printf("\n");}
            }
        }
        for (k=1; k<=2*n-1; k++)
        {
            if (k!=2*n-1)
            {
                printf("%c",c);
            }
            else printf("%c\n",c);
        }
        l++;
    }
    return 0;
}