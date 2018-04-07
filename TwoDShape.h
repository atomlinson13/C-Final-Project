#ifndef TWODSHAPE_H_INCLUDED
#define TWODSHAPE_H_INCLUDED
#include "Shape.h"


template <class type> class TwoDShape : public Shape<type>
{

public:
    TwoDShape(type side1, type side2);
    virtual type getSides();
    virtual type setSides(type sideOne, type sideTwo);
    virtual type getArea();
    virtual type getPerimeter();
    virtual type Display();
private:
 type side1;
 type side2;

};



#endif
