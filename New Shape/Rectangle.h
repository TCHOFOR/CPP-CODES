#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"


class Rectangle : public Shape
{
    public:
        Rectangle();
        virtual ~Rectangle();
        float getArea( ) { return length * width; }
        void Display ( );
    protected:

    private:
};

#endif // RECTANGLE_H
