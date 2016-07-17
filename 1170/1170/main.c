//
//  main.c
//  1170
//
//  Created by WeiLai’s Macbook Pro on 15/11/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    double a,b,c;
    int n;
    char x;
    scanf("%d",&n);
    getchar();
    while (n--)
    {
        scanf("%c%lf%lf",&x,&a,&b);
        getchar();
        if (x=='+'){ c=a+b;printf("%0.0lf\n",c);}
        if (x=='-') {c=a-b;printf("%0.0lf\n",c);}
        if (x=='*'){ c=a*b;printf("%0.0lf\n",c);}
        if (x=='/')
        {
            c=a/b;
            if ((int)a % (int)b==0)
            {
                printf("%0.0lf\n",c);
            }
            else printf("%0.2lf\n",c);
        }
    }
    return 0;
}