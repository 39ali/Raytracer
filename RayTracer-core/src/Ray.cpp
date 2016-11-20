#include "Ray.h"

Ray::Ray(const Vec3& Origin, const Vec3& Direction)
{
	m_origin = Origin;
	m_direction = Direction;
}
Ray::Ray()
{
	m_origin = Vec3(0, 0, 0);
	m_direction = Vec3(1, 0, 0);
}
Ray::~Ray()
{


}