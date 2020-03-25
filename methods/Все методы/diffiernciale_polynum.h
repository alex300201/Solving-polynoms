//
//  diffiernciale.cpp
//  Дифференицроавние полинома
//
//  Created by ale/Users/alex/Documents/kursach po dime/kursach po dimex on 15/03/2020.
//  Copyright © 2020 alex. All rights reserved.
//
#include"polynum.h"
void dif(polynum &p)
{
    for(int i=0;i<=p.out_level();i++)
    {
        p.get_kof(i,p.out_kof(i)*(p.out_level()-i));
    }
    p.get_level(p.out_level()-1);
}
