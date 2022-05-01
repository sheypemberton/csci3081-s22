#ifndef POINT3_H_
#define POINT3_H_

#include "vector3.h"

class Point3 {
public:

  Point3();
  Point3(double x, double y, double z);

  double x();
  double y();
  double z();

  double Distance(Point3 p);

private:
  double x_;
  double y_;
  double z_;
};

#endif