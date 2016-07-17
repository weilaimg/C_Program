//
//  main.c
//  2027
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000];
    int a,b,c,d,e,n,i;
    long int m;
    scanf("%d",&n);
        getchar();
        while (n--)
        {
            gets(ch);
            m=strlen(ch);
            a=b=c=d=e=0;
            for (i=0; i<m; i++)
            {
                if (ch[i]=='a')
                {
                    a+=1;
                }
                if (ch[i]=='e')
                {
                    b+=1;
                }
                if (ch[i]=='i')
                {
                    c+=1;
                }
                if (ch[i]=='o')
                {
                    d+=1;
                }
                if (ch[i]=='u')
                {
                    e+=1;
                }
            }
            if (n==0)
            {
                
                printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,b,c,d,e);
            }
            else printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n",a,b,c,d,e);
    }
    return 0;
}

