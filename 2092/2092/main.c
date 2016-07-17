//
//  main.c
//  2092
//
//  Created by WeiLai’s Macbook Pro on 15/10/20.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    double m,n;
    int x1,y1,x2,y2;
    while ((scanf("%lf%lf",&m,&n)!=EOF)&&(m!=0||n!=0))
    {
        y1=(m+sqrt(m*m-4*n))/2;
        x1=n/y1;
        y2=(m-sqrt(m*m-4*n))/2;
        x2=n/y2;
        if (x1+y1==m&&x1*y1==n)
        {
            printf("Yes\n");
        }
        else if (x2+y2==m&&x2*y2==n)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}