//
//  main.c
//  2044
//
//  Created by WeiLai’s Macbook Pro on 15/10/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
/*int fly(int x)
{
    int a;
    if (x==1)
    {
        a=1;
    }
    else if (x==2)
    {
        a=2;
    }
    else a=fly(x-1)+fly(x-2);
    return a;
}
*/

int main()
{
    int a,b,t,i;
    long long int c[55];
    c[1]=1,c[2]=2;
    for (i=3; i<=55; i++)
    {
        c[i]=c[i-1]+c[i-2];
    }

    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&a,&b);
        printf("%lld",c[b-a]);
        printf("\n");
    }
    return 0;
}
