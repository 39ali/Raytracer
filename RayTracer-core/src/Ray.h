#pragma once
#include "Vec3.h"
class Ray
{

public:
	Ray(const Vec3& Origin, const Vec3& Direction);
	Ray();
	~Ray();


private:
	Vec3 m_origin, m_direction;
};