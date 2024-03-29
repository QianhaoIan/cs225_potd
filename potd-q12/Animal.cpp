// Animal.cpp
#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(){
	type_ = "cat";
	food_ = "fish";
}
	
Animal::Animal(string type, string food){
	type_ = type;
	food_ = food;
}


string Animal::getType(){
	return type_;
}

string Animal::getFood(){
	return food_;
}

void Animal::setType(string type){
	type_ = type;
}

void Animal::setFood(string food){
	food_ = food;
}


string Animal::print(){
	string out;
	out.append("I am a ");
	out.append(getType());
	out.append(".");
	return out;
}
