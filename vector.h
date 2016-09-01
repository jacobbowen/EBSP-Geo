#include "math.h"

struct Vector3
  {
  double x,y,z;
  };

double Norm3(const Vector3 v)
  {
  return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
  };

Vector3 Add3(const Vector3 v1,const Vector3 v2)
  {
  Vector3 vr;
  vr.x = v1.x + v2.x;
  vr.y = v1.y + v2.y;
  vr.z = v1.z + v2.z;
  return vr;
  };

Vector3 Cross3(const Vector3 v1,const Vector3 v2)
  {
  Vector3 vr;
  vr.x = v1.y*v2.z - v1.z*v2.y;
  vr.y = v2.x*v1.z - v1.x*v2.z;
  vr.z = v1.x*v2.y - v1.y*v2.x;
  return vr;
  };
double Dot3(const Vector3 v1,const Vector3 v2)
  {
  return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
  };
Vector3 Unify3(const Vector3 v)
  {
  double d;
  Vector3 e;
  d = Norm3(v);
  e.x = v.x/d;
  e.y = v.y/d;
  e.z = v.z/d;
  return e;
  };
Vector3 Unit3(const double x, const double y, const double z)
  {
  double d;
  Vector3 e;
  d = sqrt(x*x + y*y + z*z);
  e.x = x/d;
  e.y = y/d;
  e.z = z/d;
  return e;
  };
Vector3 New3(const double x, const double y, const double z)
  {
  Vector3 v;
  v.x = x;
  v.y = y;
  v.z = z;
  return v;
  };
Vector3 Multiply3(const Vector3 v, const double d)
  {
  Vector3 vr;
  vr.x = v.x*d;
  vr.y = v.y*d;
  vr.z = v.z*d;
  return vr;
  };