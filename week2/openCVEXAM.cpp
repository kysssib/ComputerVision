#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("C:/CV_Resources/cat.bmp", IMREAD_COLOR);
	
	if (img.empty()) {
		cout << "Image is empty" << endl;
	}

	Mat copyimg = img.clone();

	for (int j = 0; j < copyimg.rows; j++) {
		for (int i = 0; i < copyimg.cols; i++) {
			Vec3b& pixel = copyimg.at<Vec3b>(j, i); //원본 변환을 위한 주소값 참조
			uchar gray = (uchar)((pixel[0] + pixel[1] + pixel[2]) / 3);

			//cat fur corlor = 102 59 22
			//색 유지
			//90~110
			//50~60
			//10~30

			uchar b = pixel[0];
			uchar g = pixel[1];
			uchar r = pixel[2];

			if ((b >= 0 && b <= 100) && (g >= 20 && g <= 100) && (r >= 60 && r <= 140)) {
				//nothing
			}
			else {
				pixel[0] = gray;
				pixel[1] = gray;
				pixel[2] = gray;
			}
		}
	}

	imshow("image", img);
	imshow("copyimage", copyimg);

	waitKey();
	destroyAllWindows();
}