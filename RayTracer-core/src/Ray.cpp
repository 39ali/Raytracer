#include "Ray.h"

Ray::Ray(Vec3 Origin, Vec3 Direction)
{
	origin = Origin;
	direction = Direction;
}
Ray::Ray()
{
	origin = Vec3(0, 0, 0);
	direction = Vec3(1, 0, 0);
}
Ray::~Ray()
{


}