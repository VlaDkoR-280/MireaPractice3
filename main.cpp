#include <stdio.h>
#include <math.h>
#include "Scanner.h"


//  7 variant
int main()
{
    Scanner scan;
    //double x = -2.235 * pow(10, -2);
    //double y = 2.23;
    //double z = 15.221;
    double x, y, z;
    scan.scan(&x, &y, &z);
    //scanf_s("%lf%lf%lf", &x, &y, &z);
    double f = ((exp(fabs(x - y)) * pow(fabs(x - y), x + y)) / (atan(x) + atan(z))) + (pow(pow(x, 6) + pow(log(y), 2), 1.0/3));
    scan.print(f);

}
//  -0.02235 2.23 15.221
