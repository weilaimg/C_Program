//
//  main.c
//  2549
//
//  Created by WeiLai’s Macbook Pro on 15/10/23.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main ()
{
    int t,b,i;
    long int c;
    char a[100];
    scanf("%d",&t);
    while (t--)
    {
        scanf("%s %d",a,&b);
        getchar();
        c=strlen(a);
        for(i=0;i<c;i++)
        {
            if(a[i]=='.')
            {
                if((i+b)>=c)
                {
                    printf("0\n");
                    break;
                }
                else
                {
                    printf("%c\n",a[i+b]);
                    break;
                }
            }
        }
    }
    return 0;
}
