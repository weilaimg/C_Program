//
//  main.c
//  1048
//
//  Created by WeiLai’s Macbook Pro on 15/11/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char b[26]={'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U'};
    char c[20],d[20],e[100000];
    long long l;
    int i,j,flag;
    while (1)
    {
        scanf("%s",c);
        getchar();
        
        if (c[0]=='E'&&c[1]=='N'&&c[2]=='D'&&c[3]=='O'&&c[4]=='F'&&c[5]=='I'&&c[6]=='N'&&c[7]=='P'&&c[8]=='U'&&c[9]=='T')
        {
            break;
        }
        if (c[0]=='S' && c[1]=='T'&&c[2]=='A'&&c[3]=='R'&&c[4]=='T')
        {
            gets(e);
            l=strlen(e)-1;
            scanf("%s",d);
            getchar();
            for (i=0; i<=l; i++)
            {
                flag=0;
                for (j=0; j<26; j++)
                {
                    if (e[i]==a[j])
                    {
                        printf("%c",b[j]);
                        flag=1;
                    }
                }
                if (flag==0)
                {
                    printf("%c",e[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}