/*
n C++, a virtual function is a member function that is declared in a base class with the keyword virtual 
and is overriden (redefined) in a derived class. When a virtual function is called using a pointer or 
reference to an object of the base class, the appropriate function of the derived class is executed instead 
of the function of the base class.
This allows polymorphism in C++, which means that a single function call can have different behavior 
depending on the type of the object on which it is called. The virtual function mechanism is used in
object-oriented programming to implement runtime polymorphism and is a key feature of many C++ frameworks 
and libraries.
*/

#include<iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() {  // virtual function
            cout << "Drawing a generic shape." << endl;
        }
};

class Circle : public Shape {
    public:
        void draw() {  // override of virtual function
            cout << "Drawing a circle." << endl;
        }
};

class Square : public Shape {
    public:
        void draw() {  // override of virtual function
            cout << "Drawing a square." << endl;
        }
};

int main() {
    Shape *s1 = new Circle();
    Shape *s2 = new Square();

    s1->draw();  // calls the draw() function of Circle
    s2->draw();  // calls the draw() function of Square

    delete s1;
    delete s2;
    return 0;
}
