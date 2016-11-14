#pragma once
#include <fstream>
struct RGB 
{
	double r, g, b;

};


static void CreateBMP(const char * filename, int width , int height 
 , int dpi ,RGB* data )
{
	FILE * fl;
	int k = width * height;
	int s = 4 * k;
	int filesize = 54 + s;
	double factor = 39.375;
	int m = static_cast<int>(factor);

	int ppm = dpi *m;

	unsigned char header[14] = {'B','M',0,0,0,0 , 0,0,0,0, 54,0,0,0};
	unsigned char info[40] = {40,0,0,0, 0,0,0,0 , 0,0,0,0 , 1,0,24,0};

	unsigned char rr = 256;
	int ss = sizeof(rr);
	header[2] = (unsigned char)(filesize);
	header[3] = (unsigned char)(filesize>>8);
	header[4] = (unsigned char)(filesize>>16);
	header[5] = (unsigned char)(filesize>>24);


	info[4] = (unsigned char)(width);
	info[5] = (unsigned char)(width>>8);
	info[6] = (unsigned char)(width>>16);
	info[7] = (unsigned char)(width>>24);

	info[8] = (unsigned char)(height);
	info[9] = (unsigned char)(height>>8);
	info[10] = (unsigned char)(height>>16);
	info[11] = (unsigned char)(height>>24);


	info[21] = (unsigned char)(s);
	info[22] = (unsigned char)(s >> 8);
	info[23] = (unsigned char)(s >> 16);
	info[24] = (unsigned char)(s >> 24);

	info[25] = (unsigned char)(ppm);
	info[26] = (unsigned char)(ppm >> 8);
	info[27] = (unsigned char)(ppm >> 16);
	info[28] = (unsigned char)(ppm >> 24);

	info[29] = (unsigned char)(ppm);
	info[30] = (unsigned char)(ppm >> 8);
	info[31] = (unsigned char)(ppm >> 16);
	info[32] = (unsigned char)(ppm >> 24);

	fl = fopen(filename, "wb");

	fwrite(header, 1, 14, fl);
	fwrite(info, 1, 40, fl);

	for (int i = 0; i < k; i++) 
	{
		RGB& pix = data[i];
		double red = data[i].r *255;
		double green = data[i].g * 255;
		double blue = data[i].b * 255;

		unsigned char color[3] = {(int)floor(blue) , (int)floor(green) , (int)floor(red)};
		fwrite(color, 1, 3, fl);
	}

	fclose(fl);
}