// Pet.h
#include "Animal.h"
#include <string>
using namespace std;

class Pet : public Animal{
public:
	Pet();
	Pet(string type, string food, string name, string owner_name);


	string getName();
	void setName(string);
	string getOwnerName();
	void setOwnerName(string);
	// string getFood();
	// void setFood(string);

	string print();


private:
	string name_;
	string owner_name_;




};
