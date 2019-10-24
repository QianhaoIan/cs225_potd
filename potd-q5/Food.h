// Your code here
#pragma once
#include <string>

class Food{
private:
    int quantity_;
    std::string name_;
    

public:
    Food();
    void set_name(std::string name_);
    void set_quantity(int quantity_);

    std::string get_name();
    int get_quantity();
};
