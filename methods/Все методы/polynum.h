//
//  polynum.cpp
//  Определение класса полином, конвератация других функции в полином
//
//  Created by alex on 15/03/2020.
//  Copyright © 2020 alex. All rights reserved.
//

#include "polynum.hpp"
#include<math.h>
#include"Helper.h"
class polynum
{
public:
    void get_level(int i)
    {
        level=i;
    }
    int out_level()
    {
        return level;
    }
    void get_kof(int i, double k)
    {
        kof[i]=k;
    }
    double out_kof(int i)
    {
        return kof[i];
    }
    void get_num(double n)
    {
        num=n;
    }
    float out_value()
    {
        value=0;
        for(int i=level;i>=0;i--)
        {
            value+=pow(num,i)*kof[level-i];
        }
        return value;
    }
    float calculate(float n)
    {
        value=0;
        for(int i=level;i>=0;i--)
               {
                   value+=pow(n,i)*kof[level-i];
               }
        return value;
        
    }
    void sn()
    {
        int d=1;
        level=11;
        for(int i=1;i<=11;i++)
        {
            if(i%2!=0)
            {
                kof[11-i]=d/fac(i);
                          d*=-1;
            }
            if(i%2==0)
                {
                    kof[11-i]= 0;
                }
        }
    }
private:
    int level=0;
    double *kof=new double[level];
    double num=0;
    double value=0;
};

void cn(polynum& p)
{
    int d=1;
    int i;
    p.get_level(10);
    for( i=0;i<=10;i++)
        if(i%2==0)
        {
            p.get_kof(10-i,d*(1/fac(i)));
                      d*=-1;
        }
        if(i%2!=0)
            {
                p.get_kof(10-i, 0);
            }
}
void expon(polynum &p)
{
    p.get_level(21);
    for(int i=21;i>=0;i--)
    {
        p.get_kof(21-i,1/fac(i));
    }
}
