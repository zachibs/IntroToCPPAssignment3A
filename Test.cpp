#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;
using namespace std;

TEST_CASE("Constructors"){
    SUBCASE("two ints"){
        Fraction firstFruction(3, 4);
        CHECK(firstFruction.numerator == 3);
        CHECK(firstFruction.denominator == 4);
    }

    SUBCASE("float"){
        Fraction secondfruction(0.5);
        CHECK(secondfruction.numerator == 1);
        CHECK(secondfruction.denominator == 2);
    }
    
    CHECK_THROWS(Fraction(5, 0));
    CHECK_NOTHROW(Fraction(0, 5));
}

TEST_CASE("Arithmetic"){
    SUBCASE("add"){
        CHECK((Fraction(1, 2) + Fraction(3, 4)) == Fraction(5, 4));
        CHECK((((float)2 / 3) + Fraction(4, 5)) == Fraction(22, 15));
        CHECK((Fraction(3, 4) + ((float)5 / 6)) == Fraction(19, 12));
    }

    SUBCASE("sub"){
        CHECK((Fraction(3, 4) - Fraction(1, 2)) == Fraction(1, 4));
        CHECK((Fraction(4, 5) - ((float)2 / 3)) == Fraction(2, 15));
        CHECK(((float)5 / 6) -  (Fraction(3, 4)) == Fraction(1, 12));
    }

    SUBCASE("divide"){
        CHECK((Fraction(3, 4) / Fraction(1, 2)) == Fraction(3, 2));
        CHECK((Fraction(4, 5) / ((float)2 / 3)) == Fraction(6, 5));
        CHECK(((float)5 / 6) /  (Fraction(4, 5)) == Fraction(10, 9));
    }

    SUBCASE("multiply"){
        CHECK((Fraction(3, 4) * Fraction(1, 2)) == Fraction(3, 8));
        CHECK((Fraction(4, 5) * ((float)2 / 3)) == Fraction(8, 15));
        CHECK(((float)5 / 6) *  (Fraction(3, 4)) == Fraction(5, 8));
    }
}

TEST_CASE("Comparison"){
    Fraction firstFruction(1, 2);
    SUBCASE("Two fructions"){
    CHECK(firstFruction < Fraction(2, 2));
    CHECK(firstFruction <= firstFruction);
    CHECK(firstFruction >= Fraction(3, 6));
    CHECK(firstFruction > Fraction(3, 7));
    }

    SUBCASE("fruction and float"){
        CHECK(firstFruction < 2);
        CHECK(firstFruction <= 1);
        CHECK(firstFruction >= 0.5);
        CHECK(firstFruction > 0.3);
    }
}


TEST_CASE("Increment and Decrement"){
    Fraction firstFruction(1, 2);
    SUBCASE("Increment"){
        CHECK(firstFruction++ == Fraction(1, 2));
        CHECK(firstFruction == Fraction(3, 2));
        CHECK(++firstFruction == Fraction(5, 2));
    }
    SUBCASE("Decrement"){
        CHECK(firstFruction-- == Fraction(5, 2));
        CHECK(firstFruction == Fraction(3, 2));
        CHECK(--firstFruction == Fraction(1, 2));
    }
}