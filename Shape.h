#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include <iostream>
#include <stdio.h>


using namespace std;

template <class type> class Shape
{
public:
    Shape(type side1, type side2);
    virtual type getSides();
    type getSide1();
    type getSide2();
    type setSide1(type s);
    type setSide2(type s);
    virtual type setSides(type sideOne, type sideTwo);
     virtual type getArea()=0;
    virtual type getPerimeter()=0;
    virtual type Display();
private:
   type side1;
    type side2;
};

#endif // SHAPE_H_INCLUDED
