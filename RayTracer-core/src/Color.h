#pragma once

class Color
{
public:
	Color();
	Color(const double & r, const double &  b, const double& g, const double& sp);
	~Color();
	double red, blue, green, special;

};