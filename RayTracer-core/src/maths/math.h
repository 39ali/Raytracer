#pragma once
#include <algorithm>
namespace Amath
{

	static bool solveQuad(float& a, float& b, float& c, float& x0, float& x1)
	{
		float q = b*b - 4 * a*c;
		if (q < 0) return false;
		else if (q == 0)
		{
			x0 = x1 = -0.5f*b / a;
		}
		else
		{
			float w = 0;
			if (b > 0)
			{
				w = (float)-0.5*(b + sqrt(q));

			}
			else
			{
				w = (float)-0.5*(b - sqrt(q));
			}

			x0 = w / a;
			x1 = c / w;

		}

		if (x0 > x1) std::swap(x0, x1);

		return true;
	}



}