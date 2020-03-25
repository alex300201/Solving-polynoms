//
//  Вспомогательный файл
//
//
//  Created by alex on 03/03/2020.
//  Copyright © 2020 alex. All rights reserved.
//
#include<math.h>
#include<cmath>
int fac(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
    int res=1;
    for(int i=1;i<=x;i++)
    {
        res*=i;
    }
    return res;
    }
}
float ctan(float x)
{
    return(1/tan(x));
}
float ctanh(float x)
{
    return(1/tanh(x));
}
float actan(float x)
{
    return asin(1)-atan(x);
}
