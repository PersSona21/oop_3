#include "../include/Pentagon.h"


Pentagon::Pentagon(double r, Point c)
    : r(r), center(c) {}

bool Pentagon::operator==(const Figure& other) const {
    const Pentagon* p = dynamic_cast<const Pentagon*>(&other);
    return p && r == p->r && center.x == p->center.x && center.y == p->center.y;
}

Point Pentagon::getCenter() const { return center; }

void Pentagon::print(std::ostream& os) const {
    os << "Пятиугольник: радиус = " << r << ", центр = ("
       << center.x << ", " << center.y << ")";
}

void Pentagon::read(std::istream& is) {
    std::cout << "Введите радиус описанной окружности и координаты центра (r x y): ";
    is >> r >> center.x >> center.y;
}

double Pentagon::area() const {
    return (5 * r * r * std::sin(2 * PI / 5)) / 2.0;
}
