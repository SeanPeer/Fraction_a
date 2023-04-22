#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;

Fraction a(1, 2);
Fraction b(2, 4);
Fraction c(3, 4);
Fraction d(4, 4);
Fraction f(0, 1);

TEST_CASE("Basic Arithmetic ")
{
    CHECK((a + b) == 1.0);
    CHECK((b + b) == 1.0);
    CHECK((a + b) == d);
    CHECK((b + b) == d);
    CHECK((c - a) == 0.25);
    CHECK((d - d) == 0.0);
    CHECK((d - d) == f);
    CHECK((f - f) == 0.0);
    CHECK((f - f) == f);
    CHECK((a * d) == 0.0);
    CHECK((d * d) == 1.0);
    CHECK((f * f) == 0.0);
    CHECK((f * f) == f);
    CHECK((a / b) == 1);
    CHECK((a / b) == d);
    CHECK((a / d) == a);
    CHECK((a / d) == 0.5);
}

TEST_CASE("Comperison boolean operators"){
    CHECK((a > b) == false);
    CHECK((a == b) == true);
    CHECK((a >= d) == false);
    CHECK((a <= d) == true);
    CHECK((1.0 == d) == true);
    CHECK((a == 0.2) == false);
    CHECK((a == 0.5) == true);
    
}