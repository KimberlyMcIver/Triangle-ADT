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
//Capabilities: perimeter, area, right angle, equilateral, isosceles - modeled in functions/methods

template<class itemType> // Indicates this is a template definition

// START OF PROTOTYPES for class Triangle
class Triangle : public triangleInterface<itemType> {
private:
    // Data field

    itemType side1;
    itemType side2;
    itemType side3;

    itemType Perimeter;
    itemType Area;

    itemType s;


public:
    // Default Constructor
    Triangle();

    //Parametrized constructor
    Triangle(itemType newSide1, itemType newSide2, itemType newSide3); //{

    void setSides(itemType newSide1, itemType newSide2, itemType newSide3); //{

    std::vector<itemType> getSides() const;

    itemType getPerimeter() const;

    itemType getArea() const;

    bool isRightTriangle() const;

    //check by saying if side1 = side2 = side3, then return true.
    bool isEquilateral() const;


    // check by saying if side1 = side2 or side3 = side1 or side3 = side2, then return true.
    bool isIsosceles() const;


}; // end Triangle


//START OF DEFINING

template<class itemType>
Triangle<itemType>::Triangle() {
    side1 = 1;
    side2 = 1;
    side3 = 1;
    s = (side1 + side2 + side3)/ 2;
} // end of new default constructor




template<class itemType>
Triangle<itemType>::Triangle(itemType newSide1, itemType newSide2, itemType newSide3) {
    side1 = newSide1;
    side2 = newSide2;
    side3 = newSide3;



} //end of new constructor

template<class itemType>
void Triangle<itemType>::setSides(itemType newSide1, itemType newSide2, itemType newSide3) {
    side1 = newSide1;
    side2 = newSide2;
    side3 = newSide3;


}

template<class itemType>
vector<itemType> Triangle<itemType>::getSides() const {
    vector<itemType> v;
    v.push_back(side1);
    v.push_back(side2);
    v.push_back(side3);

    return v;
} // end getSides




template<class itemType>
itemType Triangle<itemType>::getArea() const {
    itemType Area;


    Area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    return Area;


}


template<class itemType>
itemType Triangle<itemType>::getPerimeter() const {
    itemType Perimeter;
    Perimeter = (side1 + side2 + side3);
    return Perimeter;


} // end getPerimeter


template<class itemType>
bool Triangle<itemType>::isRightTriangle() const {
    if ((side3 * side3) == ((side2 * side2) + (side1 * side1)) || ((side2 * side2) == ((side3 * side3) + (side1 * side1))) || (side1 * side1) == ((side2 * side2) + (side3 * side3)))
        return true;
    return false;


}

template<class itemType>
bool Triangle<itemType>::isEquilateral() const {
    if ((side1 == side2) && (side1 == side3))
        return true;
    return false;



}

template<class itemType>
bool Triangle<itemType>::isIsosceles()  const {
    if (((side1 == side2) && (side1 != side3)) || ((side1 == side3) && (side1 != side2)) || ((side2 == side3) && (side2 !=side1)))
        return true;



}


#endif //HW3_TRIANGLE_H
