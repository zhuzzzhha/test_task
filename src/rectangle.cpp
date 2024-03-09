#include "rectangle.h"

//////////////////////////////////////////////////////////

Rectangle::Rectangle(cv::Point top_left, cv::Point bottom_right, cv::Scalar color, int thickness) :
    top_left_(top_left), bottom_right_(bottom_right), MyShape(color, thickness)
{
    if(top_left.x >= bottom_right.x  || top_left.y >= bottom_right.y)
        throw std::invalid_argument("Не верно заданы координаты левой верхней и правой нижней вершин!");
}
//////////////////////////////////////////////////////////
Square::Square(cv::Point top_left, int side_length, cv::Scalar c, int t) :
    Rectangle(top_left, cv::Point(top_left.x + side_length, top_left.y + side_length), c) {};

//////////////////////////////////////////////////////////
void Rectangle::Draw(cv::Mat& image) const {
    cv::rectangle(image, top_left_, bottom_right_, color_, thickness_);
}
