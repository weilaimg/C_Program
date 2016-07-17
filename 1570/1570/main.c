//
//  main.c
//  1570
//
//  Created by WeiLai’s Macbook Pro on 15/12/8.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
long long int f(int n)
{
       long long int sum=1;
    for (int i=1; i<=n; i++)
    {
        sum*=i;
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        getchar();
        char a;
        int m,n;
        scanf("%c%d%d",&a,&m,&n);
        if (a=='A')
        {
            printf("%lld\n",f(m)/f(m-n));
        }
        else if (a=='C')
        {
            printf("%lld\n",f(m)/(f(m-n)*f(n)));
        }
    }
    return 0;
}