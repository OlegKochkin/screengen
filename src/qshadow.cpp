// Shadow from picture, By Oleg Kochkin 2012. License GPL.

#include "qshadow.h"

// Creates a shadow by the Gaussian blur algorithm.
// img - Picture with alpha channel. For points with missing transparency a shadow is formed.
// sigma - Blur threshold (from 1 to 100).
// color - The color of the shadow.
// Returns the image as a shadow. The picture is more img on sigma*2 horizontally and vertically.
// If the input value sigma goes out of range (1-100), sigma is modified to the extreme value and after the output from the function sigma has a new value.

QImage getShadow(QImage img, int &sigma, QColor color){
	if (sigma>100) sigma=100;
	if (sigma<0) sigma=0;
	QImage imgnew (img.width()+sigma*2,img.height()+sigma*2,QImage::Format_ARGB32);
	imgnew.fill(0);
	QPainter p(&imgnew);
	p.drawImage (sigma,sigma,img);
	p.end();
	int n = sigma*3;
	double *window = new double[n+1];
	window[0] = 1.0;
	for (int i=1;i<n+1;i++)
	window[i] = exp (-i*i/(sigma*2));

	unsigned short a;
	unsigned int pixel;
	float sum;
	int width = imgnew.width();
	int height = imgnew.height();
	unsigned int *src = (unsigned int*)imgnew.bits();
	unsigned int *data = new unsigned int[width*height];

	for (int y=0;y<height;y++)
		for (int x=0;x<width;x++){
			sum = 0; a = 0;
			for (int k=-n;k<n+1;k++){
				if (x+k>=0 && x+k<width){
					pixel = src[y*width+x+k];
					a += (unsigned short) (qAlpha (pixel)*window[abs (k)]);
					sum += window[abs (k)];
					}
				}
			a = (unsigned short)(a/sum);
			data[y*width+x] = qRgba (color.red(), color.green(), color.blue(), a);
			}
	imgnew = QImage((uchar *) data, width, height, imgnew.format()).copy();
	src = (unsigned int*)imgnew.bits();		

	for (int x=0;x<width;x++)
		for (int y=0;y<height;y++){
			sum = 0; a = 0;
			for (int k=-n;k<n+1;k++){
				if (y+k>=0 && y+k<height){
					pixel = src[(y+k)*width+x];
					a += (unsigned short) (qAlpha (pixel)*window[abs(k)]);
					sum += window[abs(k)];
					}
				}
			a = (unsigned short)(a/sum);
			data[y*width+x] = qRgba (color.red(), color.green(), color.blue(), a);
			}
	imgnew = QImage((uchar*) data, width, height, imgnew.format()).copy();
	delete[] window;
	delete[] data;
	return imgnew;
}
