#pragma once
#include "Vec3.h"
#include "Color.h"
class Sphere
{
public:
	Sphere();
	~Sphere();
	Sphere(const Vec3& center, const double & radius, const Color& color);

private:
	Vec3 m_center;
	double m_radius;
	Color m_color;
};