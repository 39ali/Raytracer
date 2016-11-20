#include "Camera.h"

Camera::Camera()
{
	m_position = Vec3(0, 0, 0);
	m_direction = Vec3(0, 0, 1);
	m_camright = Vec3(0, 0, 0);
	m_camdown = Vec3(0, 0, 0);
}

Camera::~Camera()
{
}


Camera::Camera(const Vec3& pos, const  Vec3&  dir, const Vec3& right, const Vec3& down)
{
	m_position = pos;
	m_direction = dir;
	m_camright = right;
	m_camdown = down;
}