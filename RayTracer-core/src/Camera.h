#pragma once
#include "Vec3.h"
class Camera
{
public:
	Camera();
	~Camera();


public:
	Vec3 position, direction, camright, camdown;

};

