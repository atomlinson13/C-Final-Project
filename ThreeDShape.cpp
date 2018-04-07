#include <iostream>
#include "ThreeDShape.h"

#include <stdio.h>
using namespace std;

template <class type> ThreeDShape<type>::ThreeDShape(type sideOne, type sideTwo)
    : TwoDShape<type> (sideOne, sideTwo)
{
//
}

template <class type> ThreeDShape<type>::ThreeDShape(type sideOne, type sideTwo, type sideThree)
    : TwoDShape<type> (sideOne, sideTwo)
{
 setHeight(sideThree);
}

template <class type> type ThreeDShape<type>::getHeight()
{
    return height;
}

template <class type> type ThreeDShape<type>::setHeight(type height1)
{
    height = height1;
}

template <class type> type ThreeDShape<type>::getSides()
{
    Shape<type>::getSides();
}

template <class type> type ThreeDShape<type>::setSides(type sideOne, type sideTwo)
{
   Shape<type>::setSides(sideOne, sideTwo);
}

template <class type> type  ThreeDShape<type>::getArea()
{
  type side1 = Shape<type>::getSide1();
  type side2 = Shape<type>::getSide2();
  type area = side1*side2*height;
  return area;
}
template <class type> type  ThreeDShape<type>::getPerimeter()
{
  type side1 = Shape<type>::getSide1();
  type side2 = Shape<type>::getSide2();

  type perm = (side1) + (side2);
  return perm;
}

template <class type> type ThreeDShape<type>::Display()
{
    Shape<type>::Display();
}
