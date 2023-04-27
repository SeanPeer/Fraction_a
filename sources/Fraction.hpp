#ifndef FRACTION_HPP
#define FRACTION_HPP
#include <iostream>
#include <stdbool.h>
#include <utility>

using namespace std;
namespace ariel
{
    class Fraction
    {

    private:
        int _numerator;
        int _denominator;

    public:
        // Default constructor
        Fraction() { _numerator = 0,
                     _denominator = 1; }

        // Parameterized constructor
        Fraction(int numerator, int denominator)
        {
            if (denominator == 0)
            {
                throw("cannot devide a number woth 0");
            }
            if (numerator != denominator)
            {
                _numerator = numerator;
                _denominator = denominator;
            }
            else
            {
                _numerator = 1;
                _denominator = 1;
            }
        }

        // Copy constructor
        Fraction(const Fraction &frac)
        {
            _numerator = frac._numerator,
            _denominator = frac._denominator;
        }

        // Move constructor
        Fraction(Fraction &&other) noexcept : _numerator(std::exchange(other._numerator, 0)),
                                              _denominator(std::exchange(other._denominator, 1))
        {
        }

        // Move assignment operator
        Fraction &operator=(Fraction &&other) noexcept
        {
            if (this != &other) // check for self-assignment
            {
                _numerator = std::exchange(other._numerator, 0);
                _denominator = std::exchange(other._denominator, 1);
            }
            return *this;
        }

        // Destructor
        ~Fraction() {}

        // Simplify the fraction
        void simplify()
        {
            if (_numerator == 0)
            {
                _denominator = 1;
            }
            else
            {
                int divisor = gcd(_numerator, _denominator);
                _numerator /= divisor;
                _denominator /= divisor;
            }
            if (_denominator < 0)
            {
                _numerator *= -1;
                _denominator *= -1;
            }
        }
        //Euclid based gcd algorithm
        int gcd(int num1, int num2)
        {
            if (num1 == 0)
            {
                return num2;
            }
            return gcd(num2 % num1, num1);
        }

        double getFrac() const
        {
            return double(this->_numerator) / double(this->_denominator);
        }

        int getNumerator() const
        {
            return this->_numerator;
        }

        int getDenominator() const
        {
            return this->_denominator;
        }

        // Arithmetic operators
        Fraction operator+();
        Fraction operator+(const Fraction &frac);
        Fraction operator+(const float &num);
        friend Fraction operator+(const Fraction &frac1, const Fraction &frac2);
        friend Fraction operator+(const float &num1, const Fraction &frac2);
        friend Fraction operator+(const Fraction &frac1, const float &num2);
        friend Fraction operator+(const int &num1, const Fraction &frac2);
        friend Fraction operator+(const Fraction &frac1, const int &num2);

        Fraction operator-();
        Fraction operator-(const Fraction &frac);
        Fraction operator-(const float &num);
        Fraction operator-(const int &num);
        friend Fraction operator-(const Fraction &frac1, const Fraction &frac2);
        friend Fraction operator-(const float &num1, const Fraction &frac2);
        friend Fraction operator-(const Fraction &frac1, const float &num2);
        friend Fraction operator-(const int &num1, const Fraction &frac2);
        friend Fraction operator-(const Fraction &frac1, const int &num2);

        Fraction operator*();
        Fraction operator*(const Fraction &frac);
        Fraction operator*(const float &frac);
        Fraction operator*(const int &frac);
        friend Fraction operator*(const Fraction &frac1, const Fraction &frac2);
        friend Fraction operator*(const float &num1, const Fraction &frac2);
        friend Fraction operator*(const Fraction &frac1, const float &num2);

        // Fraction operator/();
        Fraction operator/(const Fraction &frac);
        Fraction operator/(const float &frac);
        Fraction operator/(const int &frac);
        friend Fraction operator/(const Fraction &frac1, const Fraction &frac2);
        friend Fraction operator/(const float &num1, const Fraction &frac2);
        friend Fraction operator/(const Fraction &frac1, const float &num2);

        // Comperison boolean operators
        friend bool operator>(const Fraction &frac1, const Fraction &frac2);
        friend bool operator>(const float &num1, const Fraction &frac2);
        friend bool operator>(const Fraction &frac1, const float &num2);

        friend bool operator<(const Fraction &frac1, const Fraction &frac2);
        friend bool operator<(const float &num1, const Fraction &frac2);
        friend bool operator<(const Fraction &frac1, const float &num2);

        friend bool operator>=(const Fraction &frac1, const Fraction &frac2);
        friend bool operator>=(const float &num1, const Fraction &frac2);
        friend bool operator>=(const Fraction &frac1, const float &num2);

        friend bool operator<=(const Fraction &frac1, const Fraction &frac2);
        friend bool operator<=(const float &num1, const Fraction &frac2);
        friend bool operator<=(const Fraction &frac1, const float &num);

        friend bool operator==(const Fraction &frac1, const Fraction &frac2);
        friend bool operator==(const float &num1, const Fraction &frac2);
        friend bool operator==(const Fraction &frac1, const float &num2);

        Fraction &operator=(const Fraction &frac)
        {
            if (this != &frac)
            {
                _numerator = frac.getNumerator();
                _denominator = frac.getDenominator();
            }
            return *this;
        }

        // Increase / decreace by 1 operators
        Fraction &operator++();
        Fraction operator++(int num);
        Fraction &operator--();
        Fraction operator--(int num);

        // Stream operators
        friend std::ostream &operator<<(std::ostream &output, const Fraction &frac) { return output; }
        friend std::istream &operator>>(std::istream &input, Fraction &frac) { return input; }
    };
}
#endif
