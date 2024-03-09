#include "circle.h"

//////////////////////////////////////////////////////////
Circle::Circle(cv::Point centre, double radius, cv::Scalar color, int thickness) :
	centre_(centre), radius_(radius), MyShape(color, thickness) {

}
//////////////////////////////////////////////////////////
void Circle::Draw(cv::Mat& image) const
{
	cv::circle(image, centre_, radius_, color_, thickness_);
};
