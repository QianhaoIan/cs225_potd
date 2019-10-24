// Pet.cpp
#include "Pet.h"
#include <iostream>
using namespace std;

// Pet::Pet() : Animal("cat", "fish"){
Pet::Pet() : Animal("cat"){
	food_ = "fish";
	name_ = "Fluffy";
	owner_name_ = "Cinda";
}

Pet::Pet(string type, string food, string name, 
		 string owner_name) : Animal(type, food){
	name_ = name;
	owner_name_ = owner_name;
}


string Pet::getName(){
	return name_;
}

void Pet::setName(string name){
	name_ = name;
}


string Pet::getOwnerName(){
	return owner_name_;
}
	
void Pet::setOwnerName(string owner_name){
	owner_name_ = owner_name;
}

// string Pet::getFood(){
// 	return food_;
// }


// void Pet::setFood(string food){
// 	food_ = food;
// }

string Pet::print(){
	return "My name is " + name_;
}

