#pragma once
#include "Figure.h"

class Pentagon : public Figure {
private:
    double r{};
    Point center{0, 0};

public:
    Pentagon() = default;
    Pentagon(double r, Point c);
    Pentagon(const Pentagon& other) = default;
    Pentagon(Pentagon&& other) noexcept = default;

    Pentagon& operator=(const Pentagon& other) = default;
    Pentagon& operator=(Pentagon&& other) noexcept = default;

    bool operator==(const Figure& other) const override;

    Point getCenter() const override;
    void print(std::ostream& os) const override;
    void read(std::istream& is) override;
    double area() const override;
};
