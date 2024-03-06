// triad.h
#pragma once
#include <string>

class Triad {
private:
    int a, b, c;

public:
    Triad(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c) {}

    int calculateSum() const;

    int getA() const;
    int getB() const;
    int getC() const;

    void setA(int sideA);
    void setB(int sideB);
    void setC(int sideC);

    void Init(int a, int b, int c);
    void Read();
    void Display() const;

    std::string toString() const;
};
