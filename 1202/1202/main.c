//
//  main.c
//  1202
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    double n,s,p,i,a,b,c,d;
    while (scanf("%lf",&n)!=EOF)
    {
        b=0;c=0;d=0;
        while (n--)
        {
            scanf("%lf%lf",&s,&p);
            if (p>=90&&p<=100)i=4;
            else if (p>=80&&p<90)i=3;
            else if (p>=70&&p<80)i=2;
            else if (p>=60&&p<70)i=1;
            else if (p>=0&&p<60)i=0;
            else if (p==-1)continue;
            a=i*s;
            b=b+a;
            c=c+s;
        }
        if (c==0)
        {
            printf("-1\n");
        }
        else printf("%.2lf\n",b/c);
    }
    return 0;
}