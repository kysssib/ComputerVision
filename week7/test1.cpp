#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

Mat background;
Point ptOld;
void on_mouse(int event, int x, int y, int flags, void*);

Mat drawLines() {
	Mat img;
	img = imread("C:/CV_Resources/cat.bmp");
	if (img.empty()) {
		cerr << "image file is not exist" << endl;
		return img;
	}

	line(img, Point(50, 50), Point(200, 50), Scalar(0, 0, 255));
	line(img, Point(50, 100), Point(200, 100), Scalar(255, 0, 255), 3);
	line(img, Point(50, 150), Point(200, 150), Scalar(255, 0, 0), 10);

	line(img, Point(250, 50), Point(350, 100), Scalar(0, 0, 255), 1, LINE_4);
	line(img, Point(250, 70), Point(350, 120), Scalar(255, 0, 255), 1, LINE_8);
	line(img, Point(250, 90), Point(350, 140), Scalar(255, 0, 0), 1, LINE_AA);

	arrowedLine(img, Point(50, 200), Point(150, 200), Scalar(0, 0, 255), 1);
	arrowedLine(img, Point(50, 250), Point(150, 250), Scalar(255, 0, 255), 1);

	return img;
}

int main(void) {

	//Mat img = drawLines();
	background = imread("C:/CV_Resources/cat.bmp");
	if (background.empty()) {
		cerr << "image file is not exist" << endl;
		return 0;
	}


	namedWindow("img");
	setMouseCallback("img", on_mouse);
	imshow("img", background);
	waitKey();
	destroyAllWindows();

	return 1;
}

void on_mouse(int event, int x, int y, int flags, void*) {
	switch (event){
	case EVENT_LBUTTONDOWN:
		ptOld = Point(x, y);
		cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
		break;
	case EVENT_LBUTTONUP:
		cout << "EVENT_LBUTTONUP: " << x << ", " << y << endl;
		break;
	case EVENT_MOUSEMOVE:
		if (flags & EVENT_FLAG_LBUTTON) {
			line(background, ptOld, Point(x, y), Scalar(0, 255, 255), 2);
			imshow("img", background);
			ptOld = Point(x, y);
		}
		break;
	default:
		break;
	}
}