#pragma once
#include <opencv2/opencv.hpp>
#include "shape.h"

class Triangle: public MyShape
{
public:
	Triangle() = default;
	Triangle(cv::Point p1, cv::Point p2, cv::Point p3, cv::Scalar c = cv::Scalar(0, 0, 255), int t = 2);
	Triangle(cv::Point startPoint, double side_1, double side_2, double side_3, cv::Scalar color = cv::Scalar(0, 0, 255), int thickness = 2);

	Triangle(const Triangle&) = default;

	~Triangle() = default;

	Triangle& operator=(const Triangle& other) {
		if (this != &other) {
			point_1_ = other.point_1_;
			point_2_ = other.point_2_;
			point_3_ = other.point_3_;
			color_ = other.color_;
			thickness_ = other.thickness_;
		}
		return *this;
	}

	void Draw(cv::Mat& image) const override;

private:

	bool isTriangle() const;

	cv::Point point_1_{2, 6};
	cv::Point point_2_{6, 6};
	cv::Point point_3_{5, 2};
};