// Your code here
#include <string>
#include "Food.h"


Food::Food(){
	name_ = "apples";
	quantity_ = 5;
}


void Food::set_name(std::string y){
	name_ = y;
}
void Food::set_quantity(int x){
	quantity_ = x;
}


std::string Food::get_name(){
	return name_;
}
int Food::get_quantity(){
	return quantity_;
}




