//
//  main.cpp
//  Все методы
//
//  Created by alex on 20/03/2020.
//  Copyright © 2020 alex. All rights reserved.
//

#include <iostream>
#include"diffiernciale_polynum.h"
int main() {
    polynum p,p1;
     const auto e=0.0001;
     float a,b,d,a1,b1;
     int c;
     std:: cout << "Введите уровень полинома" << std::endl;
     std:: cin>> a;
     p.get_level(a);
     p1.get_level(a);
     std:: cout << "Введите коэфициенты полинома начиная с найвысшой степени"<< std::endl;
     for(int i=0;i<=a;i++)
     {
         std::cin >> b;
         p.get_kof(i, b);
         p1.get_kof(i, b);
     }
     std:: cout << "Введите начальную точку для метода простых итераций и метода касательных"<< std::endl;
     std:: cin >> b;
    b1=b;
     dif(p1);
        p1.get_num(b);
        c=0;
     while (abs(a-b)>e) { //Метод простых итераций
                           a=b;
             
                           b=b-(p.calculate(b)/p1.out_value());
                           c++;
                        }
        std::cout <<"Метод простых итераций" <<b << " Количество итераций  "<<c <<std::endl;
    c=0;
    b=b1;
    while (abs(a-b)>e) { //Метод Ньютона
                           a=b;
                           b=b-(p.calculate(b)/p1.calculate(b));
                           c++;
                        }
    std::cout <<"Метод Ньютона(касательных) " <<b << " Количество итераций  "<<c <<std::endl ;
    c=0;
     std:: cout << "Введите кординаты концов отрезка для метода Хорд и комбинированого"<< std::endl;
        std:: cin >> a>>b;
    a1=a;
    b1=b;
    while(abs(a-b)>e)
    {
        d=b;
        b=a-p.calculate(a)*(b-a)/(p.calculate(b)-p.calculate(a));
        a=d;
        c++;

    }
    std::cout <<"Метод хорд " <<b <<" Количество итераций "<<c << std::endl;
    c=0;
    a=a1;
    b=b1;
    while (abs(a-b)>e) { //Метод Ньютона
                             a=a-p.calculate(a)*(b-a)/(p.calculate(b)-p.calculate(a));
                             b=b-(p.calculate(b)/p1.calculate(b));
                             c++;
                          }
      std::cout <<"Комбинированый метод " << b << " Количество итераций  "<<c <<std::endl ;
}
