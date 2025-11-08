#include "../include/Hexagon.h"


Hexagon::Hexagon(double r, Point c)
    : r(r), center(c) {}

bool Hexagon::operator==(const Figure& other) const {
    const Hexagon* h = dynamic_cast<const Hexagon*>(&other);
    return h && r == h->r && center.x == h->center.x && center.y == h->center.y;
}

Point Hexagon::getCenter() const { return center; }

void Hexagon::print(std::ostream& os) const {
    os << "Шестиугольник: радиус = " << r << ", центр = ("
       << center.x << ", " << center.y << ")";
}

void Hexagon::read(std::istream& is) {
    std::cout << "Введите радиус описанной окружности и координаты центра (r x y): ";
    is >> r >> center.x >> center.y;
}

double Hexagon::area() const {
    return (6 * r * r * std::sin(2 * PI / 6)) / 2.0;
}
