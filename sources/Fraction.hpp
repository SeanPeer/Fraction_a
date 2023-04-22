#ifndef FRACTION_HPP
#define FRACTION_HPP
#include <iostream>
#include <stdbool.h>

using namespace std;
namespace ariel
{

    class Fraction
    {

    private:
        int _numerator;
        int _denominator;
        void builder()
        {
            if (_numerator == 0)
            {
                _denominator = 1;
            }
            else
            {
                int divisor = 1;
                _numerator /= divisor;
                _denominator /= divisor;
            }
            if (_denominator < 0)
            {
                _numerator = -_numerator;
                _denominator = -_denominator;
            }
        }

    public:

        // numerator is mone & denominator is mechane !
        Fraction(int numerator = 0, int denominator = 1) : _numerator(numerator), _denominator(denominator)
        {
            builder();
        }


        Fraction(const Fraction &frac) : _numerator(frac.getNumerator()), _denominator(frac.getDenominator())
        {
            builder();
        }
        ~Fraction(){}

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
