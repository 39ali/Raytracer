#include "Color.h"


Color::Color()
{
	red = 0.5;
	blue = 0.5;
	green = 0.5;
	special = 0;
}
Color::Color(const double & r, const double &  b, const double& g, const double& sp)
{
	red = r;
	blue = b;
	green = g;
	special = sp;
}
Color::~Color() {
}
