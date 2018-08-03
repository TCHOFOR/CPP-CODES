#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"


class Triangle : public Shape
{
    public:
        Triangle();
        virtual ~Triangle();
        float getArea() { return length * width * 0.5; }
        void Display();

    protected:

    private:
};

#endif // TRIANGLE_H
