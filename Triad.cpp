// triad.cpp
#include "triad.h"
#include <iostream>

int Triad::getA() const {
    return a;
}

int Triad::getB() const {
    return b;
}

int Triad::getC() const {
    return c;
}

void Triad::setA(int sideA) {
    a = sideA;
}

void Triad::setB(int sideB) {
    b = sideB;
}

void Triad::setC(int sideC) {
    c = sideC;
}

void Triad::Init(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

void Triad::Read() {
    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    std::cout << "Enter side C: ";
    std::cin >> c;
}

void Triad::Display() const {
    std::cout << "Side A: " << a << "\n";
    std::cout << "Side B: " << b << "\n";
    std::cout << "Side C: " << c << "\n";
}

std::string Triad::toString() const {
    return "(" + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + ")";
}

int Triad::calculateSum() const {
    return a + b + c;
}
