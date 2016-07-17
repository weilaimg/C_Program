//
//  main.c
//  2734
//
//  Created by WeiLai’s Macbook Pro on 15/12/12.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    char a[300];
    int i,sum;
    while (gets(a))
    {
        sum=0;
        if (a[0]=='#') break;
        for (i=0; a[i]!='\0'; i++)
        {
            if (a[i]>='A'&&a[i]<='Z')
            sum+=(i+1)*(a[i]-'A'+1);
        }
        printf("%d\n",sum);
    }
    return 0;
}