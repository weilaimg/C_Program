//
//  main.c
//  1201
//
//  Created by WeiLai’s Macbook Pro on 15/11/19.
//  Copyright © 2015年 WeiLai’s Macbook Pro. All rights reserved.
//
#include<stdio.h>
int main()
{
    int i,t,n,y,r,s;
    scanf("%d",&t);
    {
        while(t--)
        {s=0;
            scanf("%d-%d-%d",&n,&y,&r);
            if(y==2&&r==29&&!((n+18)%4==0 && (n+18)%100!=0||(n+18)%400==0))   s=-1;
            else
            {
                if(((n%4==0&&n%100!=0||n%400==0)&&y<3)||(((n+18)%4==0&&(n+18)%100!=0||(n+18)%400==0)&&y>=3))
                    s++;
                for(i=1;i<18;i++)
                {n+=1;
                    if(n%4==0&&n%100!=0||n%400==0)  s+=366;
                    else s+=365;
                }
                s+=365;
            }
            printf("%d\n",s);
        }
    }
    return 0;
}
