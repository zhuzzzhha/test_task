#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include <opencv2/opencv.hpp>

class Triangle;

int main() {
    cv::Mat image(1000, 1000, CV_8UC3, cv::Scalar(255, 255, 255));

    Triangle triangle(cv::Point(370, 300), cv::Point(600, 400), cv::Point(550, 500), -1);
    triangle.Draw(image);

    Triangle triangle_2(cv::Point(100, 300), 200, 200, 200);
    triangle_2.SetColor(cv::Scalar(0, 0, 255));
    triangle_2.Draw(image);

    Circle circle(cv::Point(70, 70), 50, cv::Scalar(255, 0, 0), 2);
    circle.SetColor(cv::Scalar(0, 255, 0));
    circle.Draw(image);

    Rectangle rectangle(cv::Point(150, 10), cv::Point(300, 200));
    rectangle.SetThickness(5);
    rectangle.Draw(image);

    Square square(cv::Point(330, 50), 150);
    square.Draw(image);
    
    cv::imshow("Geometric Shapes", image);
    cv::waitKey(0);

    return 0;
}
