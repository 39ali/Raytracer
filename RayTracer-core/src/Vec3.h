#pragma once
#include <math.h>
class Vec3
{
public:
	double x, y, z;
	Vec3();
	Vec3(double X, double Y, double Z);
	~Vec3();
	double inline magnitude() const { return sqrt(x*x + y*y + z*z); };
	Vec3  inline normalize() const { double mag = magnitude();  return Vec3(x / mag, y / mag, z / mag); };
	Vec3 inline negative() const { return Vec3(-x, -y, -z); };
	double dotProduct(const Vec3 & vec) const { return  x*vec.x + y*vec.y + z*vec.z; };
	Vec3 crossProduct(const Vec3& vec) const { return Vec3(y*vec.z - z*vec.y, z*vec.x - x*vec.z, x*vec.y - y*vec.x); };
	Vec3 add(const Vec3& v) const { return Vec3(x + v.x, y + v.y, z + v.z); };
	Vec3 multiply(float scalar) const { return Vec3(scalar *x, scalar* y, scalar*z); };
private:


};