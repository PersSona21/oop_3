#include "../include/Figure.h"

std::ostream& operator<<(std::ostream& os, const Figure& f) {
    f.print(os);
    return os;
}

std::istream& operator>>(std::istream& is, Figure& f) {
    f.read(is);
    return is;
}
