#include <opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main() {

    Mat bluescreen = imread("C:/bluescreen.png");
    if (bluescreen.empty()) {
        cerr << "bluescreen file is not exist" << endl;
        return 0;
    }
    Mat background = imread("C:/background.png");
    if (background.empty()) {
        cerr << "background file is not exist" << endl;
        return 0;
    }

    for (int y = 0; y < bluescreen.rows; y++) {
        for (int x = 0; x < bluescreen.cols; x++) {
            Vec3b& pixel = bluescreen.at<Vec3b>(y, x);
            Vec3b& temp_pixel = background.at<Vec3b>(y, x);
            uchar b = pixel[0];
            uchar g = pixel[1];
            uchar r = pixel[2];
            uchar t_b = temp_pixel[0];
            uchar t_g = temp_pixel[1];
            uchar t_r = temp_pixel[2];
            if (((r <= 60) && (b >= 80) && (g <= 60))) {
                pixel[0] = t_b;
                pixel[1] = t_g;
                pixel[2] = t_r;
            }
        }
    }

    namedWindow("img");
    imshow("img", bluescreen);

    imwrite("20191123_KimYuSeong.png", bluescreen);

    waitKey();

    return 0;
}


