#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void camera_in() {
	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cerr << "Camera open failed!" << endl;
		return;
	}

	cout << "Frame width: " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
	cout << "Frame height: " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << endl;

	Mat frame, inversed;
	while(true) {
		cap >> frame;
		if (frame.empty())
			break;

		//Image Processing

		inversed = ~frame;

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

void stopwatch_video() {
	VideoCapture cap("C:/CV_Resources/stopwatch.avi");

	if (!cap.isOpened()) {
		cerr << "Video open failed!" << endl;
		return;
	}

	cout << "Frame width: " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
	cout << "Frame heigth: " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << endl;
	cout << "Frame count: " << cvRound(cap.get(CAP_PROP_FRAME_COUNT)) << endl;

	double fps = cap.get(CAP_PROP_FPS);
	cout << "FPS: " << fps << endl;

	int delay = cvRound(1000 / fps);

	Mat frame, inversed;

	while (true) {
		cap >> frame;
		if (frame.empty())
			break;
		//Image Processing

		inversed = ~frame;

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

void camera_in_video_out() {
	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cerr << "Camera open failed!" << endl;
		return;
	}

	int w = cvRound(cap.get(CAP_PROP_FRAME_WIDTH));
	int h = cvRound(cap.get(CAP_PROP_FRAME_HEIGHT));
	double fps = cap.get(CAP_PROP_FPS);
	cout << "FPS: " << fps << endl; //fps=0 //카메라가 값을 제공 안함

	int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');
	int delay = cvRound(1000 / fps);

	//VideoWriter outputVideo("C:/CV_Resources/output.avi", fourcc, fps, Size(w, h));

	int mp4fourcc = VideoWriter::fourcc('F', 'M', 'P', '4');
	VideoWriter outputVideo("C:/CV_Resources/output.mp4", mp4fourcc, fps, Size(w, h));

	if (!outputVideo.isOpened()) {
		cout << "File open faild!" << endl;
		return;
	}

	Mat frame, inversed;

	while (true) {
		cap >> frame;
		if (frame.empty())
			break;
		//Image Processing

		inversed = ~frame;
		outputVideo << inversed;

		imshow("frame", frame);
		imshow("inversed", inversed);

		moveWindow("frame", 0, 0);
		moveWindow("inversed", cap.get(CAP_PROP_FRAME_WIDTH), 0);

		if (waitKey(delay) == 27) {
			cout << "ESC Key pressed. Exit the camera." << endl;
			break;
		}
	}

	destroyAllWindows();
}

//int main() {
	
	//camera_in();
	//stopwatch_video();
	//camera_in_video_out();

	//return 0;
//}