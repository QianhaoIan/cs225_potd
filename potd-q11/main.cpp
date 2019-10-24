#include <iostream>
#include <string>
#include "Square.h"

int main(){
    Square a;
    std::cout << "--------" << std::endl;
    Square b = a;
    std::cout << "--------" << std::endl;
    Square c = a + b;
    std::cout << "--------" << std::endl;
    std::cout << "Square a " << a.getName() << " " << a.getLength() << std::endl;
    std::cout << "Square b " << b.getName() << " " << b.getLength() << std::endl;
    std::cout << "Square c " << c.getName() << " " << c.getLength() << std::endl;
    return 0;
}
