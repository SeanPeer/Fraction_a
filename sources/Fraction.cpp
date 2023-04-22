#include "Fraction.hpp"
#include <iostream>

using namespace std;

namespace ariel
{

    Fraction a(1, 1);
    Fraction Fraction::operator+() { return a; }
    Fraction Fraction::operator+(const Fraction &frac) { return a; }
    Fraction Fraction::operator+(const float &num) { return a; }
    Fraction operator+(const Fraction &frac1, const Fraction &frac2) { return a; }
    Fraction operator+(const float &num1, const Fraction &frac2) { return a; }
    Fraction operator+(const Fraction &frac1, const float &num2) { return a; }
    Fraction operator+(const int &num1, const Fraction &frac2) { return a; }
    Fraction operator+(const Fraction &frac1, const int &num2) { return a; }

    Fraction Fraction::operator-() { return a; }
    Fraction Fraction::operator-(const Fraction &frac) { return a; }
    Fraction Fraction::operator-(const float &num) { return a; }
    Fraction Fraction::operator-(const int &num) { return a; }
    Fraction operator-(const Fraction &frac1, const Fraction &frac2) { return a; }
    Fraction operator-(const float &num1, const Fraction &frac2) { return a; }
    Fraction operator-(const Fraction &frac1, const float &num2) { return a; }
    Fraction operator-(const int &num1, const Fraction &frac2) { return a; }
    Fraction operator-(const Fraction &frac1, const int &num2) { return a; }

    Fraction Fraction::operator*() { return a; }
    Fraction Fraction::operator*(const Fraction &frac) { return a; }
    Fraction Fraction::operator*(const float &frac) { return a; }
    Fraction Fraction::operator*(const int &frac) { return a; }
    Fraction operator*(const Fraction &frac1, const Fraction &frac2) { return a; }
    Fraction operator*(const float &num1, const Fraction &frac2) { return a; }
    Fraction operator*(const Fraction &frac1, const float &num2) { return a; }

    // Fraction Fraction::operator/(){ return a; }
    Fraction Fraction::operator/(const Fraction &frac) { return a; }
    Fraction Fraction::operator/(const float &frac) { return a; }
    Fraction Fraction::operator/(const int &frac) { return a; }
    Fraction operator/(const Fraction &frac1, const Fraction &frac2) { return a; }
    Fraction operator/(const float &num1, const Fraction &frac2) { return a; }
    Fraction operator/(const Fraction &frac1, const float &num2) { return a; }

    // Comperison boolean operators
    bool operator>(const Fraction &frac1, const Fraction &frac2) { return false; }
    bool operator>(const float &num1, const Fraction &frac2) { return false; }
    bool operator>(const Fraction &frac1, const float &num2) { return false; }

    bool operator<(const Fraction &frac1, const Fraction &frac2) { return false; }
    bool operator<(const float &num1, const Fraction &frac2) { return false; }
    bool operator<(const Fraction &frac1, const float &num2) { return false; }

    bool operator>=(const Fraction &frac1, const Fraction &frac2) { return false; }
    bool operator>=(const float &num1, const Fraction &frac2) { return false; }
    bool operator>=(const Fraction &frac1, const float &num2) { return false; }

    bool operator<=(const Fraction &frac1, const Fraction &frac2) { return false; }
    bool operator<=(const float &num1, const Fraction &frac2) { return false; }
    bool operator<=(const Fraction &frac1, const float &num) { return false; }

    bool operator==(const Fraction &frac1, const Fraction &frac2) { return false; }
    bool operator==(const float &num1, const Fraction &frac2) { return false; }
    bool operator==(const Fraction &frac1, const float &num2) { return false; }

    // Increase / decreace by 1 operators
    Fraction &Fraction::operator++()
    {
        return a;
    }
    Fraction Fraction::operator++(int num) { return a; }
    Fraction &Fraction::operator--() { return a; }
    Fraction Fraction::operator--(int num) { return a; }

        
        
   
    
}