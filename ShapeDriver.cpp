#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include <cstddef>
#include "TwoDShape.cpp"
#include "ThreeDShape.cpp"
#include <string>
#include <stdlib.h>
#include "Shape.cpp"
#include <iostream>
#include <iomanip>


using namespace std;
void menuSelection(int i);
void displayMenu();
int selection;
int num1, num2, num3;
int n = 5;
int m = 5;
int main()
{
        do
        {
         displayMenu();
        }while(selection!=6);


}

void displayMenu() {
    cout << "\nMENU \n" << "Enter 1 to create a Square \n" << "Enter 2 to Create a Rectangle \n"
        << "Enter 3 to Create a Triangle.  \n" << "Enter 4 to create a Cube \n"<< "Enter 5 to create a Box \n"  << "Enter 6 to QUIT \n";
    cin >>  selection;
    menuSelection(selection);
}

void menuSelection(int i) {
    int m;
    switch(i) {
        case 1:
            cout << "Enter the two different sides of the Rectangle\n" << "Side 1: ";
            cin >> num1;
            cout << "Side 2: ";
            cin >> num2;
            Shape<int> *square =  new TwoDShape<int>(num1,num2);
            cout << "\nSquare Area: " << square->getArea() << "\nSquare Perimeter: " << 2*square->getPerimeter();
            break;
        case 2:
            cout << "Enter the Length and Width of the Rectangle\n" << "Length: ";
            cin >> num1;
            cout << "Width: ";
            cin >> num2;
            Shape<int> *rectangle =  new TwoDShape<int>(num1,num2);
            cout << "\nRectangle Area: " << rectangle->getArea() << "\nRectangle Perimeter: " << 2*rectangle->getPerimeter();
            break;
        case 3:
            cout << "Enter the Base and Height of the Triangle\n" << "Base: ";
            cin >> num1;
            cout << "Height: ";
            cin >> num2;
            Shape<int> *triangle =  new TwoDShape<int>(num1,num2);
            cout << "\nRectangle Area: " << (triangle->getArea())/2 << "\nRectangle Perimeter: " << triangle->getPerimeter() + num1;
            break;
        case 4:
            cout << "Enter the Length, Width, and Height of a Cube.\n" << "Length: ";
            cin >> num1;
            cout << "Width: ";
            cin >> num2;
            cout << "Height: ";
            cin >> num3;
            Shape<int> *cube = new ThreeDShape<int>(num1,num2,num3);
            cout << "\nCube Area: " << cube->getArea() << "\nCube Perimeter: " << cube->getPerimeter();
            break;
        case 5:
            cout << "Enter the Length, Width, and Height of a Box.\n" << "Length: ";
            cin >> num1;
            cout << "Width: ";
            cin >> num2;
            cout << "Height: ";
            cin >> num3;
            Shape<int> *box = new ThreeDShape<int>(num1,num2,num3);
            cout << "\nBox Area: " << box->getArea() << "\nBox Perimeter: " << box->getPerimeter();
            break;
        case 6:
            exit(0);
        default:
            cout << "Please Enter a Valid Menu Value: ";
            cin >> m;
            menuSelection(m);
    }
}
