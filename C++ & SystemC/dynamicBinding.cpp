/*
Dynamic binding in C++ is a process of determining at runtime which function to call when a member function 
of a class is called using a pointer or reference to an object of that class. It is also called late binding 
or runtime polymorphism.
In C++, dynamic binding is achieved through virtual functions. When a virtual function is called using a 
pointer or reference to an object, the function that is actually called is determined at runtime based on 
the type of the object being pointed to, rather than the type of the pointer or reference. This allows for 
polymorphic behavior, where a single function call can have different behavior depending on the type of the 
object being pointed to.
Dynamic binding is used in cases where the type of the object being pointed to is not known at compile time, 
such as when working with base classes that have derived classes. By using virtual functions and dynamic 
binding, we can write code that works with objects of the base class and automatically calls the appropriate 
function in the derived class based on the actual type of the object being pointed to at runtime.
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