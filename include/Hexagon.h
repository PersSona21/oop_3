#pragma once
#include "Figure.h"

class Hexagon : public Figure {
private:
    double r{};
    Point center{0, 0};

public:
    Hexagon() = default;
    Hexagon(double r, Point c);
    Hexagon(const Hexagon& other) = default;
    Hexagon(Hexagon&& other) noexcept = default;

    Hexagon& operator=(const Hexagon& other) = default;
    Hexagon& operator=(Hexagon&& other) noexcept = default;

    bool operator==(const Figure& other) const override;

    Point getCenter() const override;
    void print(std::ostream& os) const override;
    void read(std::istream& is) override;
    double area() const override;
};
