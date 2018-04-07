#include <iostream>
#include "Shape.h"
using namespace std;

template <class type> Shape<type>::Shape(type sideOne, type sideTwo)
   : side1(sideOne),
     side2( sideTwo )
{
 //Constructor
}

 template <class type> type Shape<type>::getSide1() {  return side1;}
 template <class type> type Shape<type>::getSide2() { return side2; }
 template <class type> type Shape<type>::setSide1(type s) {  side1 = s;}
 template <class type> type Shape<type>::setSide2(type s) { side2 = s; }

template <class type> type Shape<type>::getSides()
{
    return side1;
}

template <class type> type Shape<type>::setSides(type sideOne, type sideTwo)
{
  if(sideOne > 0 && sideTwo > 0)   {
    side1 = sideOne;
      side2 = sideTwo;
    return true;
  }

  if(sideOne <= 0 || sideTwo <= 0)
  {
    side1 = 0;
    side2 = 0;
    return false;
  }
}

template <class type> type Shape<type>::Display()
{
    string end = "\n";

    cout << "\nSide One: " << side1 << " "
        << "\nSide Two;  " << side2 << " ";
    return 1;
}
