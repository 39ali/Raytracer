#include "Sphere.h"


bool Sphere::intersect(const Vec3f& orig, const Vec3f& dir, float& t) const
{
	Vec3f L = orig - m_center;
	float a = dir.dot(dir);
	float b = 2 * dir.dot(L);
	float c = L.dot(L) - m_radius2;
	float t0, t1;
	if (!Amath::solveQuad(a, b, c, t0, t1))return false;

	if (t0 < 0)
	{
		t0 = t1;
		if (t1 < 0)
		{
			return false;
		}
	}

	t = t0;
	return true;
}
