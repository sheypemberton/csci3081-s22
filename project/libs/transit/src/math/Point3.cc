#include "../../include/math/Point3.h"

Point3::Point3() {
  x_ = 0.0;
  y_ = 0.0;
  z_ = 0.0;
}

Point3::Point3(double x, double y, double z) {
  x_ = x;
  y_ = y;
  z_ = z;
}

double Point3::x() {
  return x_;
}

double Point3::y() {
  return y_;
}

double Point3::z() {
  return z_;
}

double Point3::Distance(Point3 p) {
  double d = sqrt(pow(x_ - p.x(), 2.0) + pow(y_ - p.y(), 2.0) + pow(z_ - p.z(), 2.0));
  return d;
}