#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

String LENNA_IMG = "C:/CV_Resources/lenna.bmp";

void on_brightness(int pos, void* userdata);
void on_contrast(int pos, void* userdata);

Mat calcGrayHist(const Mat& img) {
	CV_Assert(img.type() == CV_8UC1);

	Mat hist;
	int channels[] = { 0 };
	int dims = 1;
	const int histSize[] = { 256 };
	float graylevel[] = { 0, 256 };
	const float* ranges[] = { graylevel };

	calcHist(&img, 1, channels, noArray(), hist, dims, histSize, ranges);

	return hist;
}

Mat getGrayHistImage(const Mat& hist) {
	CV_Assert(hist.type() == CV_32FC1);
	CV_Assert(hist.size() == Size(1, 256));

	double histMax;
	minMaxLoc(hist, 0, &histMax);

	Mat imgHist(100, 256, CV_8UC1, Scalar(255));
	for (int i = 0; i < 256; i++) {
		line(imgHist, Point(i, 100),
			Point(i, 100 - cvRound(hist.at<float>(i, 0) * 100 / histMax)), Scalar(0));
	}

	return imgHist;
}


void brightness4() {
	Mat src = imread(LENNA_IMG, IMREAD_GRAYSCALE);

	if (src.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	namedWindow("dst");
	createTrackbar("Brightness", "dst", 0, 50, on_brightness, (void*)&src);
	on_brightness(0, (void*)&src);
	setTrackbarMin("Brightness", "dst", -50);

	waitKey();
	destroyAllWindows();
}

void on_brightness(int pos, void* userdata) {
	Mat src = *(Mat*)userdata;
	Mat dst = src + pos - 50;

	imshow("dst", dst);
}

void brightness5() {
	Mat src = imread(LENNA_IMG, IMREAD_GRAYSCALE);

	if (src.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	namedWindow("dst");
	namedWindow("dstHist");
	imshow("dstHist", getGrayHistImage(calcGrayHist(src)));
	createTrackbar("Contrast", "dst", 0, 100, on_contrast, (void*)&src);
	on_brightness(50, (void*)&src);
	setTrackbarMin("Contrast", "dst", -50);
	setTrackbarPos("Contrast", "dst", 0);

	waitKey();
	destroyAllWindows();
}

void on_contrast(int pos, void* userdata) {
	Mat src = *(Mat*)userdata;

	Mat dst = src + (src - mean(src)) * (pos / 100.0);

	imshow("dst", dst);
	imshow("dstHist", getGrayHistImage(calcGrayHist(dst)));
}


int main() {
	//brightness4();
	brightness5();

	return 0;
}