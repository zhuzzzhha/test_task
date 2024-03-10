#include "circle.h"

//////////////////////////////////////////////////////////
Circle::Circle(cv::Point centre, double radius, cv::Scalar color, unsigned int thickness) :
	centre_(centre), radius_(radius), MyShape(color, thickness) {
	if(radius <= 0)
		throw std::invalid_argument("Радиус не может быть меньше 0!");
}
//////////////////////////////////////////////////////////
void Circle::Draw(cv::Mat& image) const
{
	cv::circle(image, centre_, radius_, color_, thickness_);
};
