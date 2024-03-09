#include "triangle.h"
#include <opencv2/opencv.hpp>

//////////////////////////////////////////////////////////
Triangle::Triangle(cv::Point point_1, cv::Point point_2, cv::Point point_3, cv::Scalar color, int thickness) :
	point_1_(point_1), point_2_(point_2), point_3_(point_3), MyShape(color, thickness) {
	// Проверяем условие на формирование треугольника
	if (!isTriangle()) {
		throw std::invalid_argument("Не выполняется правило треугольника!");
	}
}

//////////////////////////////////////////////////////////
void Triangle::Draw(cv::Mat& image) const
{
	cv::line(image, point_1_, point_2_, color_, thickness_);
	cv::line(image, point_2_, point_3_, color_, thickness_);
	cv::line(image, point_3_, point_1_, color_, thickness_);
	};
//////////////////////////////////////////////////////////
Triangle::Triangle(cv::Point startPoint, double side_1, double side_2, double side_3, cv::Scalar color, int thickness):
	point_1_(startPoint), MyShape(color, thickness){

	point_1_ = startPoint;
	point_2_ = cv::Point(startPoint.x + side_1, startPoint.y);
	point_3_ = cv::Point(startPoint.x + 0.5 * (side_1 + side_3 * std::cos(side_2)), startPoint.y - side_3 * std::sin(side_2));
	if (!isTriangle()) {
		throw std::invalid_argument("Не выполняется правило треугольника!");
	}
}

//////////////////////////////////////////////////////////
bool Triangle::isTriangle() const {
	double side1 = cv::norm(point_1_ - point_2_);
	double side2 = cv::norm(point_2_ - point_3_);
	double side3 = cv::norm(point_3_ - point_1_);

	return (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1);
}