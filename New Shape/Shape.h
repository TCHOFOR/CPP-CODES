#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        Shape();
        virtual ~Shape();

        float Getwidth() { return width; }
        void Setwidth(float val) { width = val; }
        float Getlength() { return length; }
        void Setlength(float val) { length = val; }
        void Read();
        void Print();

    protected:
        float width;
        float length;
    private:
};

#endif // SHAPE_H
