#include "../include/Rhombus.h"

Rhombus::Rhombus(double d1, double d2, Point c)
    : d1(d1), d2(d2), center(c) {}

bool Rhombus::operator==(const Figure& other) const {
    const Rhombus* r = dynamic_cast<const Rhombus*>(&other);
    if (!r) return false;
    return d1 == r->d1 && d2 == r->d2 && center.x == r->center.x && center.y == r->center.y;
}

Point Rhombus::getCenter() const { return center; }

void Rhombus::print(std::ostream& os) const {
    os << "Ромб: диагонали = (" << d1 << ", " << d2 << "), центр = ("
       << center.x << ", " << center.y << ")";
}

void Rhombus::read(std::istream& is) {
    std::cout << "Введите диагонали ромба (d1 d2) и координаты центра (x y): ";
    is >> d1 >> d2 >> center.x >> center.y;
}

double Rhombus::area() const {
    return (d1 * d2) / 2.0;
}
