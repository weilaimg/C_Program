//
//  main.c
//  2033
//
//  Created by WeiLai’s Macbook Pro on 15/9/25.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int AH,AM,AS,BH,BM,BS;
        int sumh,summ,sums;
        scanf("%d%d%d%d%d%d",&AH,&AM,&AS,&BH,&BM,&BS);
        sumh=AH+BH;
        summ=AM+BM;
        sums=AS+BS;
        if (sums>60)
        {
            summ+=1;
            sums-=60;
        }
        if (summ>60)
        {
            sumh+=1;
            summ-=60;
        }
        printf("%d %d %d\n",sumh,summ,sums);;
    }
    return 0;
}