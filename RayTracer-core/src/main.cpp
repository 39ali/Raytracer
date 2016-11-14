#include "createBMP.h"


int main()
{
	int w = 640;
	int h = 480;
	RGB * pixels = new RGB[w*h];
	int place;
	for (int x = 0; x < w; x++)
	{
		for (int y = 0; y < h; y++) {
			place = w *y + x;
			if ((x>100 && x<300) && (y >100 && y<300)) {
				pixels[place].r = 0.2;
				pixels[place].g = 0.3;
				pixels[place].b = 0.4;

			}
		}
	}


	CreateBMP("res/hoi.bmp", w, h, 72, pixels);
	int i = 000;
	return 0;
}