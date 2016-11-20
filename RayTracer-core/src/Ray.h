#pragma once
#include "Vec3.h"
class Ray
{

public:
	Vec3 origin, direction;
	Ray(Vec3 Origin, Vec3 Direction);
	Ray();
    ~Ray();


private:


};