// #include "human.h"
// #include "man.h"
#include <iostream>
using namespace std;



class Human{
public:
	int age;
	int height;
	Human(int age = 1, int height = 10){
		age = age;
		height = height;
	}
};




class Man : public Human{
public:
	Man(int age, int height);
};



// Man::Man(int age, int height){
// 	age = age;
// 	height = height;
// }

Man::Man(int age, int height) : Human(age, height){
	age = age;
	height = height;
}



int main(){
	Man Jack(20, 170);
	cout << Jack.age << endl;
}
