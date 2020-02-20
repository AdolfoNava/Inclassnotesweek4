#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.hpp"

class Square{
    friend class Rectangle;
    private:
        int m_side;
    public:
        Square(int side);
}
#endif