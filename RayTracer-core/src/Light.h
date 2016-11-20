#pragma once
#include "Color.h"
#include "Vec3.h"
class Light
{
public:
	Light(const Vec3& pos, const Color & color);
	Light();
	~Light();
	inline	const Vec3&  getPos() { return m_pos; };
	inline const Color&  getColor() { return m_color; };
private:
	Color m_color;
	Vec3 m_pos;

};