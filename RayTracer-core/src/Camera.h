#pragma once
#include "Vec3.h"
class Camera
{
public:
	Camera();
	Camera(const Vec3& pos, const  Vec3&  dir, const Vec3& right, const Vec3& down);
	~Camera();

private:
	Vec3 m_position, m_direction, m_camright, m_camdown;

};

