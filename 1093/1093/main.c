//
//  main.c
//  1093
//
//  Created by WeiLai’s Macbook Pro on 15/9/24.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a,b,c;
    //int h[b];
    b=1;
    scanf("%d",&a);
    while (b<=a)
    {
        scanf("%d",&c);
        int f,e=0,g=0;
        while (e<c)
        {
            f=0;
            scanf("%d",&f);
            g=g+f;
            e++;
        }
        printf("%d\n",g);
       // h[b]=g;
        b=b+1;
    }
    
    //int i;
    //for (i=1; i<=a; i++)
    //{
    //    printf("%d\n",h[i]);
    //}
    return 0;
}

