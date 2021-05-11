#include "../header/rectangle.hpp"

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return this->width * this->height;
}

int Rectangle::perimeter() {
    return 2*this->get_height() + 2*this->get_width();
}

int Rectangle::get_width() {
	return width;
}

int Rectangle::get_height() {
        return height;
}

Rectangle::Rectangle(int w, int h){
	width = w;
	height = h;
}

Rectangle::Rectangle() {}
