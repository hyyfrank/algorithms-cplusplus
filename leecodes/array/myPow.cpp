//
// Created by Huang Yanyi on 2019-04-14.
//

#include "myPow.h"

double myPow::calcPow(double x, int n) {
    if (n < 0) { return 1.0 / pow(x, -n); }
    else { return pow(x, n); }
}
double myPow::pow(double x, int n) {
    if (n == 0) return 1;
    double v = pow(x, n / 2);
    if (n % 2 == 0) {
        return v * v;
    } else {
        return v * v * x;
    }
}
