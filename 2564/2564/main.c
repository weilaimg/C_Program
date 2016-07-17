//
//  main.c
//  2564
//
//  Created by WeiLai’s Macbook Pro on 15/11/17.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,i,a;
    char c[10000];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(c);
        a=strlen(c);
        if(c[0]>='a'&&c[0]<='z')
            printf("%c",c[0]-32);
        if(c[0]>='A'&&c[0]<='Z')
            printf("%c",c[0]);
        for(i=1;c[i]!='\0';i++)
        {
            
            if(c[i]==' '&&((c[i+1]>='a'&&c[i+1]<='z')||c[i+1]>='A'&&c[i+1]<='Z'))
            {
                if(c[i+1]>='a'&&c[i+1]<='z')
                    c[i+1]=c[i+1]-32;
                printf("%c",c[i+1]);
            }
        }
        printf("\n");
    }
    return 0;
}