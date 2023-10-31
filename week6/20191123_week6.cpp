#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

Mat processing_img(Mat original_img)
{
	Mat img = original_img.clone();

	for (int y = 0; y < img.rows; y++) {
		for (int x = 0; x < img.cols; x++) {
			Vec3b& pixel = img.at<Vec3b>(y, x);
			uchar b = pixel[0];
			uchar g = pixel[1];
			uchar r = pixel[2];
			uchar pixelavg = static_cast<uchar>((r + g + b) / 3);
			if (!((r >= 50) && (b <= 70 && b >= 0) && (g <= 70 && g >= 0))) {
				pixel[0] = pixelavg;
				pixel[1] = pixelavg;
				pixel[2] = pixelavg;
			}
		}
	}

	return img;
}

void camera_in() {
	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cerr << "Camera open failed!" << endl;
		return;
	}

	cout << "Frame width: " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
	cout << "Frame height: " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << endl;
	cout << "Frame type: " << cvRound(cap.get(CAP_PROP_FRAME_TYPE)) << endl;

	Mat frame, inversed;
	while (true) {
		cap >> frame;
		if (frame.empty())
			break;

		//Image Processing

		inversed = ~frame;
		//cout << typeid(frame).name() << endl;
		//cout << frame.type() << endl;
		//cout << frame.channels() << endl;
		// 
		inversed = processing_img(frame);

		imshow("frame", frame);
		imshow("inversed", inversed);

		moveWindow("frame", 0, 0);
		moveWindow("inversed", cap.get(CAP_PROP_FRAME_WIDTH), 0);

		if (waitKey(10) == 27) {
			cout << "ESC Key pressed. Exit the camera." << endl;
			break;
		}
	}

	destroyAllWindows();
}



void grayscale_video() {
	VideoCapture cap("C:/CV_Resources/stopwatch.avi");

	if (!cap.isOpened()) {
		cerr << "Video open failed!" << endl;
		return;
	}

	int w = cvRound(cap.get(CAP_PROP_FRAME_WIDTH));
	int h = cvRound(cap.get(CAP_PROP_FRAME_HEIGHT));
	double fps = cap.get(CAP_PROP_FPS);
	cout << "WIDTH: " << w << endl;
	cout << "HEIGHT: " << h << endl;
	cout << "FPS: " << fps << endl;

	int delay = cvRound(1000 / fps);
	int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');

	VideoWriter outputVideo("C:/CV_Resources/20191123_week6_assignment.avi", fourcc, fps, Size(w, h));

	if (!outputVideo.isOpened()) {
		cout << "File open faild!" << endl;
		return;
	}

	Mat frame, processed_frame;

	while (true) {
		cap >> frame;
		if (frame.empty())
			break;
		//Image Processing

		processed_frame = processing_img(frame);
		outputVideo << processed_frame;

		imshow("frame", frame);
		imshow("processed", processed_frame);

		moveWindow("frame", 0, 0);
		moveWindow("processed", cap.get(CAP_PROP_FRAME_WIDTH), 0);


		if (waitKey(delay) == 27) {
			cout << "ESC Key pressed. Exit the camera." << endl;
			break;
		}
	}

	destroyAllWindows();
}

int main() {
	//grayscale_video();
	camera_in();


	return 0;
}