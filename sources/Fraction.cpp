#include "Fraction.hpp"
using namespace ariel;
using namespace std;

Fraction::Fraction(): numerator(0), denominator(1){}

Fraction::Fraction(int firstnumber, int secondnumber){
    if(secondnumber == 0){
        throw runtime_error("Division by 0");
    } else{
        this->numerator = firstnumber;
        this->denominator = secondnumber;
    }
}

Fraction::Fraction(float secondnumber): numerator(secondnumber * 1000), denominator(1000){}

Fraction Fraction::operator+(const Fraction &secondnumber){
    return secondnumber;
}

Fraction Fraction::operator-(const Fraction &secondnumber){
    return secondnumber;
}

Fraction Fraction::operator/(const Fraction &secondnumber){
    return secondnumber;
}

Fraction Fraction::operator*(const Fraction &secondnumber){
    return secondnumber;
}

Fraction Fraction::operator+(float number){ 
    return *this;
}

Fraction Fraction::operator-(float numeber){ 
    return *this;
}

Fraction Fraction::operator/(float numeber){ 
    return *this;
}

Fraction Fraction::operator*(float numeber){ 
    return *this;
}

Fraction &Fraction::operator++(){ 
    return *this;
}
Fraction Fraction::operator++(int number){ 
    return *this;
}

Fraction &Fraction::operator--(){ 
    return *this;
}

Fraction Fraction::operator--(int number){ 
    return *this;
}

bool Fraction::operator<=(const Fraction &fraction) const{ 
    return true;
}

bool Fraction::operator>=(const Fraction &fraction) const{ 
    return true;
}

bool Fraction::operator<(const Fraction &fraction) const{ 
    return true;
}

bool Fraction::operator>(const Fraction &fraction) const{ 
    return true;
}

bool Fraction::operator==(const Fraction &fraction) const{ 
    return true;
}

bool Fraction::operator<=(float){ 
    return true;
}

bool Fraction::operator>=(float){ 
    return true;
}

bool Fraction::operator<(float){ 
    return true;
}

bool Fraction::operator>(float){ 
    return true;
}

bool Fraction::operator==(float number){ 
    return true;
}

Fraction operator+(float number, const Fraction &secondnumber){ 
    return secondnumber;
}

Fraction operator-(float number, const Fraction &secondnumber){
    return secondnumber;
}

Fraction operator/(float number, const Fraction &secondnumber){ 
    return secondnumber;
}

Fraction operator*(float number, const Fraction &secondnumber){
    return secondnumber;
}

bool operator<=(float number, const Fraction &fraction){ 
    return true;
}

bool operator>=(float number, const Fraction &fraction){ 
    return true;
}

bool operator<(float number, const Fraction &fraction){ 
    return true;
}

bool operator>(float number, const Fraction &fraction){ 
    return true;
}


bool operator==(float number, const Fraction &fraction){ 
    return true;
}

ostream &operator<<(ostream &stream, const Fraction &fraction){
    return (stream << fraction.numerator << '/' << fraction.denominator);
}

istream &operator>>(istream &stream, const Fraction &fraction){
    return stream;
}

void Fraction::reduce(){
}

int Fraction::gcd(const Fraction &fraction){
    return 1;
}