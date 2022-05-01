#include "SphereCollider.h"

SphereCollider::SphereCollider() {
  tag_ = "";
  center_ = Point3();
  radius_ = 0.0;
}

SphereCollider::SphereCollider(std::string tag, double centerX, double centerY, double centerZ, double radius) {
  tag_ = tag;
  center_ = Point3(centerX, centerY, centerZ);
  radius_ = radius;
}

std::string SphereCollider::Tag() const {
  return this->tag_;
}

Point3 SphereCollider::Center() const {
  return center_;
}

double SphereCollider::Radius() const {
  return radius_;
}

std::string CheckCollision(SphereCollider* c1, SphereCollider* c2) {
  double dist = c1->Center().Distance(c2->Center());
  if (dist <= c1->Radius() + c2->Radius()) {
    return c2->Tag();
  }
  return "";
}

void SphereCollider::UpdatePosition(double newX, double newY, double newZ) {
  center_ = Point3(newX, newY, newZ);
}