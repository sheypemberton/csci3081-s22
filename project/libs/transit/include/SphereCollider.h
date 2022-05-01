#ifndef SPHERE_COLLIDER_H_
#define SPHERE_COLLIDER_H_

#include <string>

#include "math/Point3.h"

class SphereCollider {
public:

  SphereCollider();

  SphereCollider(std::string tag, double centerX, double centerY, double centerZ, double radius);

  virtual ~SphereCollider() {}

  SphereCollider(const SphereCollider& s) {
    tag_ = s.Tag();
    center_ = s.Center();
    radius_ = s.Radius();
  }

  SphereCollider& operator=(const SphereCollider& s) {
    this->tag_ = s.Tag();
    this->center_ = s.Center();
    this->radius_ = s.Radius();
    return *this;
  }

  std::string Tag() const;

  Point3 Center() const;

  double Radius() const;

  

  void UpdatePosition(double newX, double newY, double newZ);

private:

  std::string tag_;

  Point3 center_;
  double radius_;
};

std::string CheckCollision(SphereCollider* c1, SphereCollider* c2);

#endif