#pragma once
#include <opencv2/opencv.hpp>
#include "shape.h"

class Rectangle:public MyShape {
public:
    Rectangle(cv::Point top_left, cv::Point bottom_right, cv::Scalar color = cv::Scalar(0, 0, 255), unsigned int thickness = 2);

    ~Rectangle() = default;

	Rectangle& operator=(const Rectangle& other) {
		if (this != &other) {
			top_left_ = other.top_left_;
			bottom_right_ = other.bottom_right_;
			color_ = other.color_;
			thickness_ = other.thickness_;
		}
		return *this;
	}

    void Draw(cv::Mat& image) const override;
protected:
    cv::Point top_left_;
    cv::Point bottom_right_;
};

class Square : public Rectangle {
public:
    Square(cv::Point top_left, double side_length, cv::Scalar color = cv::Scalar(0, 0, 255), unsigned int thickness = 2);
	~Square() = default;

private:
	double side_length{ 10 };
};
