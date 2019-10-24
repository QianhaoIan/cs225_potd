// Animal.h
#include <string>
using namespace std;

class Animal{
	public:
		Animal();
		Animal(string name, string type);

		string getType();
		string getFood();
		void setType(string);
		void setFood(string);

		virtual string print();

	private:
		string type_;
		string food_;
};