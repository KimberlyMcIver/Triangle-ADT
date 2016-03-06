//.
//

#ifndef HW3_TRIANGLE_H
#define HW3_TRIANGLE_H
/** Header file for the class Triangle. */

#include <vector>
#include <cmath>
#include <iostream>
#include "triangle_interface.h"


using namespace std;

//typedef float itemType; //continue fix if doesn't work

// class Triangle {
//Attributes: side1, side2, side3 - modeled in variables
//Capabilities: perimeter, area, right angle, equilateral, isosolecs - modeled in functions/methods

template<class itemType> // Indicates this is a template definition

// START OF DECLARATION for class Triangle
class Triangle :public triangleInterface<itemType> {
private:
    // Data field

    itemType side1;
    itemType side2;
    itemType side3;

    itemType Perimeter; //not sure about these
    itemType Area;// same
    itemType s = (side1 + side2 + side3)/2;




public:
    // Default Constructor
    Triangle();

    //Parametrized constructor
    Triangle(itemType newSide1, itemType newSide2 , itemType newSide3);

    //Mutation method that can change the value of the data field
        //virtual void setSides(const itemType newSide1, itemType newSide2, itemType newSide3) = 0;
    void setSides(itemType newSide1, itemType newSide2, itemType newSide3){

         newSide1 = side1;
         newSide2 = side2;
         newSide3 = side3;
    }

    //Accessor method to get the value of the data field
    //virtual void getSides() = 0;
    //itemType getSide1() {return side1;}
    //itemType getSide2() {return side2;}
    //itemType getSide3() {return side3;}
    std::vector<itemType> getSides();

    itemType getPerimeter() {return Perimeter;}
    //void setPerimeter() {Perimeter = side1 + side2 + side3;}

    itemType getArea() {return Area;}
    //void setArea() {Area = sqrt(s * (s-side1) * (s - side2) * (s - side3));}

    //virtual itemType getArea() = 0;

     //bool isRightTriangle() {return true;}
    // check by saying if any side = 90 degrees, then return true.

    bool isRightTriangle(itemType side1, itemType side2, itemType side3)
    {
       if (side3 == (side2 + side1))
           return true;

    }

     //bool isEquilateral() {return true;}
    //check by saying if side1 = side2 = side3, then return true.
    bool isEquilateral(itemType side1, itemType side2, itemType side3)
     {
         if (side1 == side2 == side3)

        return true;
     }



    //bool isIsosceles() {return true;}
    // check by saying if side1 = side2 or side3 = side1 or side3 = side2, then return true.
    bool isIsosceles(itemType side1, itemType side2, itemType side3)
    {
        if (side1 == side2 || side2 == side3 || side1 == side3)
            return true;
    }

}; // end Triangle


//START OF

template<class itemType>
Triangle<itemType>::Triangle() {
    side1 = 1;
    side2 = 1;
    side3 = 1;
} // end of new default constructor

//template<class itemType>
//Triangle<itemType>::Triangle() {
     //side1 = 1;
     //side2 = 1;
     //side3 = 1;
//} // end default constructor

template<class itemType>
Triangle<itemType>::Triangle(itemType newSide1, itemType newSide2 , itemType newSide3){
    // TODO - DO STUFF HERE FOR CONSTRUCTOR
} //end of new constructor

//template<class itemType>
//Triangle<itemType>::Triangle(const itemType & theItem) {


//} // end constructor

template<class itemType>
void Triangle<itemType>::setSides(itemType newSide1, itemType newSide2, itemType newSide3) {
    newSide1 = side1;
    newSide2 = side2;
    newSide3 = side3;

    // TODO - DO STUFF HERE FOR SETSIDES
} // end of new setSides

//template <class itemType>
//void Triangle<itemType>::setSides(itemType side1, itemType side2, itemType side3) {


//} // end setSides

template<class itemType>


template <class itemType>
vector<itemType>Triangle<itemType>::getSides() {
    return getSides();
    } // end getSides




template<class itemType>
    itemType Triangle<itemType>::getArea()  {
    Area() = sqrt(s * (s-side1) * (s - side2) * (s - side3));
    return Area();
    } // end getArea

//template<class itemType>
//void Triangle<itemType>::setArea(itemType side1, itemType side2, itemType side3) {
    //Area = sqrt(s * (s-side1) * (s - side2) * (s - side3));

//TODO set stuff here for Area return setArea();
//}

template<class itemType>
    itemType Triangle<itemType>::getPerimeter() {
    Perimeter() = side1+side2+side3;
    return Perimeter();
    } // end getPerimeter

//template<class itemType>
    //itemType Triangle<itemType>::setPerimeter(){
    //Perimeter = side1 + side2 + side3;


//}








#endif //HW3_TRIANGLE_H
