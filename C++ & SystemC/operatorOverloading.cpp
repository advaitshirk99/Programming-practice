/*
Operator overloading is a feature in C++ that allows operators such as +, -, *, /, etc. to be redefined for 
user-defined classes, giving them more natural and intuitive behavior.
In the case of complex numbers, operator overloading allows us to use the standard arithmetic operators on 
complex numbers, just as we would with real numbers.
*/

#include<iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r=0, double i=0) {
            real = r;
            imag = i;
        }
        Complex operator+(Complex const &obj) {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void print() {
            cout << real << " + i" << imag << endl;
        }
};

int main() {
    Complex c1(2.5, 3.2);
    Complex c2(1.6, 4.0);
    Complex c3 = c1 + c2; // using overloaded operator+
    c3.print(); // output: 4.1 + i7.2
    return 0;
}