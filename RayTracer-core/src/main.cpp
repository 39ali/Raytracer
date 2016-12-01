#include "../src/maths/Vec3.h"
#include "Renderer.h"

int main()
{

	Vec3<float> v(1.);
	Vec3<float> s(2.);
	auto a = v - s;
	v = 3 * v;
	const Vec3<float>  sum = s + v;
	Renderer::render();
	return 0;

}

