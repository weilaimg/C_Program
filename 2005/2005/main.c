//
//  main.c
//  2005
//
//  Created by WeiLai’s Macbook Pro on 15/9/29.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//

#include <stdio.h>
int main()
{
    int y,m,d,sum;
    while (scanf("%d/%d/%d",&y,&m,&d)!=EOF)
    {
        if (m==1){sum=d;}
        if (m==2){sum=31+d;}
        if (m==3){sum=31+28+d;}
        if (m==4){sum=31+28+31+d;}
        if (m==5){sum=31+28+31+30+d;}
        if (m==6){sum=31+28+31+30+31+d;}
        if (m==7){sum=31+28+31+30+31+30+d;}
        if (m==8){sum=31+28+31+30+31+30+31+d;}
        if (m==9){sum=31+28+31+30+31+30+31+31+d;}
        if (m==10){sum=31+28+31+30+31+30+31+31+30+d;}
        if (m==11){sum=31+28+31+30+31+30+31+31+30+31+d;}
        if (m==12){sum=31+28+31+30+31+30+31+31+30+31+30+d;}
        if (m>2&&y%4==0&&y%100!=0||y%400==0){sum+=1;}
        printf("%d\n",sum);
    }
    return 0;
}