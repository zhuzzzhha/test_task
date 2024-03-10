#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include <opencv2/opencv.hpp>

class Triangle;

int main() {
    cv::Mat image(1000, 1000, CV_8UC3, cv::Scalar(255, 255, 255));

    Triangle triangle(cv::Point(370, 300), cv::Point(600, 400), cv::Point(550, 500),cv::Scalar(190, 47, 212), 1);
    triangle.Draw(image);

    Triangle triangle_2(cv::Point(50, 300), 200, 200, 200);
    triangle_2.Draw(image);

    Circle circle(cv::Point(70, 70), 50, cv::Scalar(255, 0, 0), 2);
    circle.SetColor(cv::Scalar(13, 69, 181));
    circle.Draw(image);

    Rectangle rectangle(cv::Point(150, 10), cv::Point(300, 200),cv::Scalar(224, 142, 18));
    rectangle.SetThickness(5);
    rectangle.Draw(image);

    Square square(cv::Point(330, 50), 150,cv::Scalar(18, 224, 114), 2);
    square.Draw(image);
    
    cv::imshow("Geometric Shapes", image);
    cv::waitKey(0);

    return 0;
}
