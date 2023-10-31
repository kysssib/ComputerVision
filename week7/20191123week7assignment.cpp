#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

Mat background_img;
Point ptOld;
bool drawing = false;
void mouse_move(int event, int x, int y, int flags, void*);

int main() {
	background_img = imread("C:/CV_Resources/cat.bmp");

	if (background_img.empty()) {
		cerr << "image file is not exist" << endl;
		return 0;
	}


	namedWindow("img");
	setMouseCallback("img", mouse_move);

	imshow("img", background_img);
	waitKey();
	destroyAllWindows();

	return 1;
}

void draw_rect(Mat img, int x1, int y1, int x2, int y2) {
	Point startPt = Point(min(x1, x2), min(y1, y2));
	Point endPt = Point(max(x1, x2), max(y1, y2));
	Scalar red(0, 0, 255);
	
	rectangle(img, startPt, endPt, red, 2);
}

void mouse_move(int event, int x, int y, int flags, void*) {
    switch (event) {
    case EVENT_LBUTTONDOWN:
        ptOld = Point(x, y);
        drawing = true;
        cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
        break;
    case EVENT_LBUTTONUP:
        drawing = false;
        cout << "EVENT_LBUTTONUP: " << x << ", " << y << endl;
        draw_rect(background_img, ptOld.x, ptOld.y, x, y); //�Ŀ� ���콺 ���� �׸��� ���� ��Ŵ
        break;
    case EVENT_MOUSEMOVE:
        if (drawing) {
            Mat temp_img = background_img.clone(); //���� ��� ���� ��
            draw_rect(temp_img, ptOld.x, ptOld.y, x, y); //�簢�� �׸��� ����
            imshow("img", temp_img); //�Ŀ� �簢���� �׷��� �̹����� ���
            //�� ���� ���� �� �� ���� �̹����� �ٽ� ���� ��
            //�ٽ� ���ο� �簢���� �׸���
            //�� �� �簢���� �׷��� �̹����� ������
        }
        break;
    default:
        break;
    }
}