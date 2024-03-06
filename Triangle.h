// triangle.h
#include "triad.h"
#include <string>


class Triangle {
private:
    Triad sides;

public:
    Triangle(int sideA = 0, int sideB = 0, int sideC = 0) : sides(sideA, sideB, sideC) {}

    double calculateAngleA() const;
    double calculateAngleB() const;
    double calculateAngleC() const;
    double calculateArea() const;

    std::string toString(double a) const;

    void Read();
    void Display() const;


};

