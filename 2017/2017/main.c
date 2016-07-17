//
//  main.c
//  2017
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>

int main()
{
    int t,i;
    char a;
    scanf("%d",&t);
    getchar();
    for (i=0; i<t;i++)
    {
        int count=0;
        while ((a=getchar())!='\n')
        {
            if (a>='0'&&a<='9')
            {
                count+=1;
            }
            else
                count+=0;
        }
        printf("%d\n",count);
    }
    return 0;
}
