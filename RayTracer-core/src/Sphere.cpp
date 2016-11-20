#include "Sphere.h"

Sphere::Sphere()
{
	m_center = Vec3();
	m_color = Color();
	m_radius = 1.0f;
}
Sphere::~Sphere()
{

}
Sphere::Sphere(const Vec3& center, const double & radius, const Color& color)
{
	m_center = center;
	m_radius = radius;
	m_color = color;
}