#include "createBMP.h"
#include "Vec3.h"
#include "Camera.h"
#include "Color.h"
#include "Light.h"
#include "Sphere.h" 
int main()
{
	int w = 640;
	int h = 480;
	RGB * pixels = new RGB[w*h];
	int p_place;

	Vec3 X(1, 0, 0);
	Vec3 Y(0, 1, 0);
	Vec3 Z(0, 0, 1);


	Vec3 lookAt(0, 0, 0);
	Vec3 campos(3, 1.5, -4);
	Vec3 diff(campos.x - lookAt.x, campos.y - lookAt.y, campos.z - lookAt.z);

	Vec3 camdir = diff.negative().normalize();
	Vec3 camright = Y.crossProduct(camdir).normalize();
	Vec3 camdown = camright.crossProduct(camdir);
	Camera cam(campos, camdir, camright, camdown);


	Color white(1, 1, 1, 0);
	Color green(0.5, 1, 0.5, 0);
	Color gray(0.5, 0.5, 0.5, 0);
	Color black(0, 0, 0, 0);
	Vec3 light_Pos(-7, 10, -10);
	Light light(light_Pos, white);


	Sphere sphere();

	for (int x = 0; x < w; x++)
	{
		for (int y = 0; y < h; y++) {
			p_place = w *y + x;
			if ((x > 100 && x < 300) && (y >100 && y < 300)) {
				pixels[p_place].r = 0.2;
				pixels[p_place].g = 0.3;
				pixels[p_place].b = 0.4;

			}
		}
	}


	CreateBMP("res/hoi.bmp", w, h, 72, pixels);
	int i = 00000;
	return 0;
}