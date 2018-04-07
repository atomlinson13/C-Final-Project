#include <iostream>
#include "TwoDShape.h"
#include <stdio.h>
using namespace std;

template <class type> TwoDShape<type>::TwoDShape(type sideOne, type sideTwo)
    : Shape<type> (sideOne, sideTwo)
{
   setSides(sideOne,sideTwo);
}

template <class type> type TwoDShape<type>::getSides()
{
    side1 = Shape<type>::getSide1();
    side2 = Shape<type>::getSide2();
}

template <class type> type TwoDShape<type>::setSides(type sideOne, type sideTwo)
{
   type find = Shape<type>::setSides(sideOne, sideTwo);
   if(find == false)
   {
       cout << "\nCannot use 0 or Negative Value!!!\n";
   }
}

template <class type> type  TwoDShape<type>::getArea()
{
  type side1 = Shape<type>::getSide1();
  type side2 = Shape<type>::getSide2();

  type area = side1*side2;
  return area;
}

template <class type> type  TwoDShape<type>::getPerimeter()
{
  type side1 = Shape<type>::getSide1();
  type side2 = Shape<type>::getSide2();

  type perm = (side1) + (side2);
  return perm;
}

template <class type> type TwoDShape<type>::Display()
{
    Shape<type>::Display();
}
