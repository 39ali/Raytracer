#pragma once
#include "../maths/Vec3.h"
#include <algorithm>
class  BaseObject
{
public:
	BaseObject(const Vec3f& _color) :m_color(_color) {};

	virtual	~BaseObject() {};
	virtual	bool intersect(const Vec3f& origin, const Vec3f& dir, float&t) = 0;

	virtual void getSurfaceData(const Vec3f&, const Vec3f&, Vec3f &)const = 0;
protected:
	Vec3f m_color;
};
