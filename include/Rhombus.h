#pragma once
#include "Figure.h"

class Rhombus : public Figure {
private:
    double d1{}, d2{};
    Point center{0, 0};

public:
    Rhombus() = default;
    Rhombus(double d1, double d2, Point c);
    Rhombus(const Rhombus& other) = default;
    Rhombus(Rhombus&& other) noexcept = default;

    Rhombus& operator=(const Rhombus& other) = default;
    Rhombus& operator=(Rhombus&& other) noexcept = default;

    bool operator==(const Figure& other) const override;

    Point getCenter() const override;
    void print(std::ostream& os) const override;
    void read(std::istream& is) override;
    double area() const override;
};
