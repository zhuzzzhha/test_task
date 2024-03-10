#pragma once
#include <opencv2/opencv.hpp>


class MyShape
{
public:
	MyShape(cv::Scalar color, unsigned int thickness);
	virtual void Draw(cv::Mat& image) const = 0;
	void SetColor(cv::Scalar color);

	void SetThickness(unsigned int thickness);
	
	cv::Scalar color_{ 0, 0, 0 };
	unsigned int thickness_{ 1 };
};
