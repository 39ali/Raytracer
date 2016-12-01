#pragma once
#include "../maths/Vec3.h"
#include "../maths/math.h"
#include "BaseObject.h"
class Sphere : BaseObject
{

public:
	Sphere(const Vec3f& _center, const float& _r, const Vec3f& _color) :m_center(_center), m_radius(_r), m_radius2(_r*_r), BaseObject(_color) {};
	bool intersect(const Vec3f& orig, const Vec3f& dir, float& t) const;


private:

	Vec3f m_center;
	float m_radius;
	float m_radius2;
};