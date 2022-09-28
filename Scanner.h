//
// Created by vladk on 28.09.2022.
//

#ifndef UNTITLED_SCANNER_H
#define UNTITLED_SCANNER_H
#include "stdio.h"
#include "math.h"


class Scanner {
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
};


#endif //UNTITLED_SCANNER_H
