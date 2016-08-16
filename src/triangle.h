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

template<class itemType>
class Triangle : public triangleInterface<itemType> {
private:
    itemType side1;
    itemType side2;
    itemType side3;

public:

    Triangle();

    Triangle(itemType newSide1, itemType newSide2, itemType newSide3);

    void setSides(itemType newSide1, itemType newSide2, itemType newSide3);

    std::vector<itemType> getSides() const;

    itemType getPerimeter() const;

    itemType getArea() const;

    bool isRightTriangle() const;

    bool isEquilateral() const;

    bool isIsosceles() const;


}; // end Triangle Prototypes

// this function below sets up the triangle object :)
template<class itemType>
Triangle<itemType>::Triangle() {
    side1 = 1;
    side2 = 1;
    side3 = 1;

} // end of new default constructor

// this function below sets the parameters for the constructor
template<class itemType>
Triangle<itemType>::Triangle(itemType newSide1, itemType newSide2, itemType newSide3) {
    side1 = newSide1;
    side2 = newSide2;
    side3 = newSide3;

} //end of parameterized constructor

// this function below sets the sides of the triangle
template<class itemType>
void Triangle<itemType>::setSides(itemType newSide1, itemType newSide2, itemType newSide3) {
    side1 = newSide1;
    side2 = newSide2;
    side3 = newSide3;

} // end setSides

// this function below gets the sides of the triangle
template<class itemType>
vector<itemType> Triangle<itemType>::getSides() const {
    vector<itemType> v;
    v.push_back(side1);
    v.push_back(side2);
    v.push_back(side3);
    return v;

} // end getSides

// below function gets the area of the triangle
template<class itemType>
itemType Triangle<itemType>::getArea() const {
    itemType Area;
    itemType s;
    s = (side1+side2+side3)/2;
    Area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    return Area;

} //end getArea

// below function get the perimeter of the triangle
template<class itemType>
itemType Triangle<itemType>::getPerimeter() const {
    itemType Perimeter;
    Perimeter = (side1 + side2 + side3);
    return Perimeter;

} //end getPerimeter

// below function checks if the triangle is a right triangle
template<class itemType>
bool Triangle<itemType>::isRightTriangle() const {
    if ((side3 * side3) == ((side2 * side2) + (side1 * side1)) || ((side2 * side2) == ((side3 * side3) + (side1 * side1))) || (side1 * side1) == ((side2 * side2) + (side3 * side3)))
        return true;
    return false;

} // end isRightTriangle

// below function checks if the triangle is a equilateral triangle
template<class itemType>
bool Triangle<itemType>::isEquilateral() const {
    if ((side1 == side2) && (side1 == side3))
        return true;
    return false;

} // end isEquilateral

//below function checks if triangle is a Isosceles triangle
template<class itemType>
bool Triangle<itemType>::isIsosceles()  const {
    if (((side1 == side2) && (side1 != side3)) || ((side1 == side3) && (side1 != side2)) || ((side2 == side3) && (side2 != side1)))
        return true;
    return false;

} // end isIsosceles

#endif //HW3_TRIANGLE_H
