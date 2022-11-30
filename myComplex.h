#include <iostream>
#include <math.h>
using namespace std;

class myComplex
{
    friend istream &operator>>(istream &input, myComplex &obj);
    friend ostream &operator<<(ostream &out, const myComplex &obj);

private:
    double real_, imagiary_;
    void setRIprivate(double real, double imaginary);

public:
    myComplex();
    myComplex(double real, double imaginary);
    ~myComplex();
    void setRI(double real, double imaginary);
    double getR();
    double getI();
    double size();
    void print();

    myComplex operator+(const myComplex &obj);
    myComplex operator-(const myComplex &obj);
    myComplex operator++();
    myComplex operator++(int);
    bool operator==(const myComplex &obj);
    bool operator!=(const myComplex &obj);
    bool operator>(const myComplex &obj);
    bool operator<(const myComplex &obj);
    bool operator>=(const myComplex &obj);
    bool operator<=(const myComplex &obj);
};
//***********************************************************************************

// setRIprivate
void myComplex::setRIprivate(double real, double imaginary)
{
    real_ = real;
    imagiary_ = imaginary;
}
// first counstructor
myComplex::myComplex()
{
}
// second counstructor
myComplex::myComplex(double real, double imaginary)
{
    setRIprivate(real, imaginary);
}
// tabe mokhareb
myComplex::~myComplex()
{
}
// set real & imaginary
void myComplex::setRI(double real, double imaginary)
{
    setRIprivate(real, imaginary);
}
// get real
double myComplex::getR()
{
    return real_;
}
// get imaginary
double myComplex::getI()
{
    return imagiary_;
}
// size adad
double myComplex::size()
{
    return sqrt((imagiary_ * imagiary_) + (real_ * real_));
};
// print function
void myComplex::print()
{

    cout << real_ << showpos << imagiary_ << "i";
};
// operator +

myComplex myComplex::operator+(const myComplex &obj)
{
    myComplex temp;
    temp.imagiary_ = imagiary_ + obj.imagiary_;
    temp.real_ = real_ + obj.real_;
    return temp;
}
// operator -
myComplex myComplex::operator-(const myComplex &obj)
{
    myComplex temp;
    temp.imagiary_ = imagiary_ - obj.imagiary_;
    temp.real_ = real_ - obj.real_;
    return temp;
}
// operator ++
myComplex myComplex::operator++()
{
    imagiary_ += 1;
    real_ += 1;
    return *this;
}
//++ operator
myComplex myComplex::operator++(int)
{
    myComplex temp = *this;
    imagiary_ += 1;
    real_ += 1;
    return temp;
}
// operator ==
bool myComplex::operator==(const myComplex &obj)
{
    return ((real_ == obj.real_) && (imagiary_ == obj.imagiary_));
}
// operator !=
bool myComplex::operator!=(const myComplex &obj)
{
    return ((real_ != obj.real_) && (imagiary_ != obj.imagiary_));
}
// operator >
bool myComplex::operator>(const myComplex &obj)
{
    return ((real_ > obj.real_) && (imagiary_ > obj.imagiary_));
}
// operator >=
bool myComplex::operator>=(const myComplex &obj)
{
    return ((real_ >= obj.real_) && (imagiary_ >= obj.imagiary_));
}
// operator <
bool myComplex::operator<(const myComplex &obj)
{
    return ((real_ < obj.real_) && (imagiary_ < obj.imagiary_));
}
// operator <=
bool myComplex::operator<=(const myComplex &obj)
{
    return ((real_ <= obj.real_) && (imagiary_ <= obj.imagiary_));
}
// operator <<
ostream &operator<<(ostream &out, const myComplex &obj)
{
    out << obj.real_ << showpos << obj.imagiary_ << "i" <<noshowpos;
    return out;
}
// operator >>
istream &operator>>(istream &input, myComplex &obj)
{
    cout << "Enter the real for the number : ";
    input >> obj.real_;

    cout << "Enter the imaginary for the number : ";
    input >> obj.imagiary_;

    return input;
}