//
// Created by mac on 4/19/18.
//

#include "mySqrt.h"
#include <complex>
double mySqrt::sqrtfunc(double x) {
  double left = 1, right = x / 2;
  double last_mid; //        mid
  if (x < 2) return x;
  while (abs(right - left) > 0.001) { //精度控制
    const double mid = left + (right - left) / 2;
    if (x / mid > mid) { //     x > mid * mid不能這麼寫，會溢出
      left = mid + 0.001;
      last_mid = mid;
    } else if (x / mid < mid) {
      right = mid - 0.001;
    } else {
      return mid;
    }
  }
  return last_mid;
}