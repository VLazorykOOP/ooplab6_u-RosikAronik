#include <iostream>
#include <cmath>
using namespace std;


    class Figure {
    public:
        virtual double area() = 0;
        virtual ~Figure() {}
    };

    class Rectangle : public Figure {
    private:
        double length;
        double width;

    public:
        Rectangle(double l, double w) : length(l), width(w) {}

        double area() override {
            return length * width;
        }
    };

    class Circle : public Figure {
    private:
        double radius;

    public:
        Circle(double r) : radius(r) {}

        double area() override {
            return 3.14 * pow(radius, 2);
        }
    };

    class RightTriangle : public Figure {
    private:
        double base;
        double height;

    public:
        RightTriangle(double b, double h) : base(b), height(h) {}

        double area() override {
            return 0.5 * base * height;
        }
    };

    class Trapezoid : public Figure {
    private:
        double topBase;
        double bottomBase;
        double height;

    public:
        Trapezoid(double tb, double bb, double h) : topBase(tb), bottomBase(bb), height(h) {}

        double area() override {
            return 0.5 * (topBase + bottomBase) * height;
        }
    };

    void task2() {
        Rectangle rectangle(5, 3);
        Circle circle(2);
        RightTriangle triangle(4, 6);
        Trapezoid trapezoid(3, 6, 4);

        Figure* figures[4];

        figures[0] = &rectangle;
        figures[1] = &circle;
        figures[2] = &triangle;
        figures[3] = &trapezoid;

        for (int i = 0; i < 4; i++) {
            cout << "Area " << i + 1 << ": " << figures[i]->area() << endl;
        }
    }
       