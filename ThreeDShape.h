#ifndef THREEDSHAPE_H_INCLUDED
#define THREEDSHAPE_H_INCLUDED
#include "TwoDShape.h"
#include <iostream>
#include <stdio.h>
#include "Shape.h"

template <class type> class ThreeDShape : public TwoDShape<type>
{

public:
    ThreeDShape(type side1, type side2);
    ThreeDShape(type side1, type side2, type side3);
    virtual type getSides();
    virtual type setSides(type sideOne, type sideTwo);
    virtual type getArea();
    type getHeight();
    type setHeight(type height1);
    virtual type getPerimeter();
    virtual type Display();
private:
    type height;

};

#endif
