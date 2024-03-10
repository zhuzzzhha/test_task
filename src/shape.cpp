#include "shape.h"

MyShape::MyShape(cv::Scalar color, unsigned int thickness) : color_{ color }, thickness_{ thickness }
{
}
//////////////////////////////////////////////////////////
void MyShape::SetColor(cv::Scalar color)
{
	color_ = color;
}
//////////////////////////////////////////////////////////
void MyShape::SetThickness(unsigned int thickness)
{
	thickness_ = thickness;
}