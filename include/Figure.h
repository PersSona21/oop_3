#pragma once
#include <iostream>
#include <utility>

const double PI = 3.14159265358979323846;

struct Point {
    double x{};
    double y{};
};

class Figure {
public:
    virtual ~Figure() = default;

    virtual Point getCenter() const = 0;
    virtual void print(std::ostream& os) const = 0;
    virtual void read(std::istream& is) = 0;
    virtual double area() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Figure& f);
    friend std::istream& operator>>(std::istream& is, Figure& f);

    virtual bool operator==(const Figure& other) const = 0;

    explicit operator double() const { return area(); }
};
