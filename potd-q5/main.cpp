// your code here
#include <iostream>
#include "Food.h"
#include "q5.h"


int main(){
	Food food;
	std::cout << "You have " << food.get_quantity() << " " << food.get_name() << "." << std::endl;
	increase_quantity(&food);
	std::cout << "You have " << food.get_quantity() << " " << food.get_name() << "." << std::endl;
}
