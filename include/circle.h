#pragma once
#include <opencv2/opencv.hpp>
#include"shape.h"

class Circle: public MyShape
{
public:
	Circle() = default;
	Circle(cv::Point centre, double radius, cv::Scalar c = cv::Scalar(0, 0, 255), int t = 2);

	Circle(const Circle&) = default;

	Circle& operator=(const Circle& other) {
		if (this != &other) {
			centre_ = other.centre_;
			radius_ = other.radius_;
			color_ = other.color_;
			thickness_ = other.thickness_;
		}
		return *this;
	}

	void Draw(cv::Mat& image) const override;
	~Circle() = default;


private:

	cv::Point centre_{0, 0};
	double radius_{ 1 };
};