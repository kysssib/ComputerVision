#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat img;
Rect rect;
Mat temp_rectImg;
Point ptOld;
Rect area;
char pressed_key;
bool drawing = false;
bool grayscale = false;

void mouse_move(int event, int x, int y, int flags, void*);

Mat grascaleing_img(Mat original_img)
{
	Mat t_img = original_img.clone();

	for (int y = 0; y < t_img.rows; y++) {
		for (int x = 0; x < t_img.cols; x++) {
			Vec3b& pixel = t_img.at<Vec3b>(y, x);
			uchar b = pixel[0];
			uchar g = pixel[1];
			uchar r = pixel[2];
			uchar pixelavg = static_cast<uchar>((r + g + b) / 3);
				pixel[0] = pixelavg;
				pixel[1] = pixelavg;
				pixel[2] = pixelavg;
		}
	}

	return t_img;
}

int main() {
	img = imread("C:/background.png");

	if (img.empty()) {
		cerr << "image file is not exist" << endl;
		return 0;
	}


	namedWindow("img");
	setMouseCallback("img", mouse_move);
	
	while (true) {
		imshow("img", img);

		pressed_key = waitKey(1000);
		if (pressed_key == 27) {
			cout << "ESC Key pressed. Exit the camera." << endl;
			break;
		}
		else if(pressed_key == char('G') || pressed_key == char('g')) {
			if (!area.empty()) {
				Mat rect_area = img(area);
				temp_rectImg = rect_area.clone();

				if (grayscale) {
					rect_area = temp_rectImg;
					grayscale = false;
				}
				else {
					rect_area = grascaleing_img(temp_rectImg);
					grayscale = true;
				}
			}
		}
	}
	destroyAllWindows();

	return 1;
}


void draw_rect(Mat img, int x1, int y1, int x2, int y2) {
	Point startPt = Point(min(x1, x2), min(y1, y2));
	Point endPt = Point(max(x1, x2), max(y1, y2));
	Scalar red(0, 0, 255);

	area = Rect(startPt.x, startPt.y, endPt.x, endPt.y);

	rectangle(img, startPt, endPt, red, 2);
}

void mouse_move(int event, int x, int y, int flags, void*) {
	switch (event) {
	case EVENT_LBUTTONDOWN:
		ptOld = Point(x, y);
		drawing = true;
		grayscale = false;
		break;

	case EVENT_LBUTTONUP:
		draw_rect(img, ptOld.x, ptOld.y, x, y);
		break;

	case EVENT_MOUSEMOVE:
		if (flags & EVENT_FLAG_LBUTTON) {
			Mat temp_img = img.clone();
			draw_rect(temp_img, ptOld.x, ptOld.y, x, y);
			imshow("img", temp_img);
			break;
		}
	default:
		break;
	}
}