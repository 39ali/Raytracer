#include "Light.h"


Light::Light(const Vec3& pos, const Color & color)
{
	m_pos = pos;
	m_color = color;
}
Light::Light()
{
	m_pos = Vec3();
	m_color = Color(1, 1, 1, 0);
}
Light::~Light()
{



}

