
#include <opencv2/opencv.hpp>
#pragma once

class MyShape
{
public:
	MyShape(cv::Scalar color, int thickness) : color_{ color }, thickness_{ thickness }
	{}
	virtual void Draw(cv::Mat& image) const = 0;
	void SetColor(cv::Scalar color)
	{
		color_ = color;
	}

	void SetThickness(int thickness)
	{
		thickness_ = thickness;
	}
	
	cv::Scalar color_{ 0, 0, 0 };
	int thickness_{ -1 };
};
