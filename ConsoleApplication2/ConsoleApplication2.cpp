
#include<opencv2/highgui.hpp>
#include<opencv2/imgcodecs.hpp>
#include<iostream>

using namespace cv;
using namespace std;


int main()
{
    cout << "Hello World!\n";
    cv::Mat pic = cv::imread("front-back.jpg");
    cv::imshow("pics", pic);
    cv::waitKey(0);
}


