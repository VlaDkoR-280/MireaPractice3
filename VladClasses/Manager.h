//
// Created by vladk on 28.09.2022.
//

#ifndef UNTITLED_MANAGER_H
#define UNTITLED_MANAGER_H
#include "stdio.h"
#include "math.h"


class Manager {
public:
    void scan(double* a, double* b, double* c){
        //*a = -2.235 * pow(10, -2);
        //*b = 2.23;
        //*c = 15.221;
        scanf_s("%lf%lf%lf", a, b, c);
    }
    void print(double a){
        printf("%f", a);
    }

    void print(int a){
        printf("%d", a);
    }
};


#endif //UNTITLED_MANAGER_H
