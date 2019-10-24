#include <iostream>
#include <string>

#include "Square.h"

Square::Square() {
    name = "mysquare";
    lengthptr = new double;
    *lengthptr = 2.0;
    std::cout << "Initialization" << std::endl;

}

void Square::setName(std::string newName) {
  name = newName;
}

void Square::setLength(double newVal) {
  *lengthptr = newVal;
}

std::string Square::getName() const {
  return name;
}

double Square::getLength() const {
  return *lengthptr;
}

Square::Square(const Square & other) {
    name = other.getName();
    lengthptr = new double;
    *lengthptr = other.getLength();
    std::cout << "Copy" << std::endl;
}

Square::~Square() {
    delete lengthptr;
}


Square & Square::operator=(const Square & right){
    name = right.getName();
    // delete lengthptr;
    // lengthptr = new double;
    *lengthptr = right.getLength();
    std::cout << "Assignment" << std::endl;
    return *this;
}



Square Square::operator+(const Square & right){
    // this->name = "111";
    // right.name = "222";
    std::string name = this->getName() + right.getName();
    Square* new_Squre = new Square();
    new_Squre->setName(name);
    new_Squre->setLength(getLength() + right.getLength());
    std::cout << "+" << std::endl;
    return *new_Squre;
}
