#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main() {
	cout << "Hello OpenCV" << CV_VERSION << endl;

	Mat img;
	img = imread("C:/CV_Resources/lenna.bmp",IMREAD_GRAYSCALE);

	if (img.empty()) {
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");
	imshow("image", img);

	waitKey(0);
	return 0;
}