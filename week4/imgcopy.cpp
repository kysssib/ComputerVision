#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void MatOp2()
{
	Mat img1 = imread("C:/CV_Resources/cat.bmp");

	Mat img2 = img1;
	Mat img3;
	img3 = img1; //img1, img2, img3는 모두 같은 메모리 가리킴

	Mat img4 = img1.clone(); //img1 deepcopy
	Mat img5;
	img1.copyTo(img5); //img1 deepcopy

	img1.setTo(Scalar(0, 255, 255));

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);
	imshow("img4", img4);
	imshow("img5", img5);

	waitKey();
	destroyAllWindows();
}

void MatOp3()
{
	Mat catimg = imread("C:/CV_Resources/cat.bmp");

	if (catimg.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	Mat deepCopy_original_catimg = catimg.clone(); // deepcopy original catimg

	Mat catimg2 = catimg(Rect(220, 120, 340, 240)); // shallowcopy cropped catimg rect area
	Mat catimg3 = catimg(Rect(220, 120, 340, 240)).clone(); //deepcopy cropped catimg rect area

	Mat deepCopycatimg_before_invert;
	catimg2.copyTo(deepCopycatimg_before_invert); //catimg2 deepcoppy before invert

	catimg2 = ~catimg2; //cropped area(catimg) invert
	//because of shallow copy(catimg2) original img has damaged

	Mat deepCopycatimg_after_invert = ~deepCopycatimg_before_invert.clone(); //deepcoppy deepCopycatimg_before_invert and inverting
	//before img will not damaged because of deepcopy

	imshow("deepCopy_original_catimg", deepCopy_original_catimg);
	imshow("catimg", catimg); //damaged catimg2 inverting
	imshow("catimg2", catimg2);
	imshow("catimg3", catimg3);

	//show img deepcopied
	imshow("deepCopycatimg_before_invert", deepCopycatimg_before_invert);
	imshow("deepCopycatimg_after_invert", deepCopycatimg_after_invert);

	waitKey();
	destroyAllWindows();
}

void MatOp4() 
{
	Mat img = imread("C:/CV_Resources/cat.bmp", IMREAD_GRAYSCALE);
	
	if (img.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	Mat changed_img = img.clone();

	for (int y = 0; y < changed_img.rows; y++) {
		for (int x = 0; x < changed_img.cols; x++) {
			changed_img.at<uchar>(y, x) += 100;
		}
	}

	imshow("original img", img);
	imshow("changed img", changed_img);

	waitKey();
	destroyAllWindows();
}

int main() {
	//MatOp2();
	//MatOp3();
	MatOp4();
	return 0;
}