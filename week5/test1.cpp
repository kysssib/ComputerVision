#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

String file_location = "C:/CV_Resources/cat.bmp";

Mat inverse_img(Mat original_img)
{
	Mat img = original_img.clone();

	for (int y = 0; y < img.rows; y++) {
		for (int x = 0; x < img.cols; x++) {
			Vec3b& pixel = img.at<Vec3b>(y, x);
			pixel[0] = 255 - pixel[0];
			pixel[1] = 255 - pixel[1];
			pixel[2] = 255 - pixel[2];
		}
	}

	return img;
}

void waitandclose() {
	waitKey();
	destroyAllWindows();
}

int main() {

	Mat original_img = imread(file_location, IMREAD_COLOR);

	if (original_img.empty()) {
		cerr << "Image load failed!" << endl;
		return 0;
	}
	else {
		cout << "Image load success!" << endl;
	}

	if (original_img.type() == CV_8UC1)
		cout << "Image is a gryascale image." << endl;
	else if (original_img.type() == CV_8UC3)
		cout << "Image is a turecolor image" << endl;
	else
		cout << "Image is an another class image" << endl;

	Mat copied_img = inverse_img(original_img);
	imshow("Original_img", original_img);
	imshow("Inversed_img", copied_img);
	waitandclose();

	return 0;
}