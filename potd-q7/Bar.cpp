// your code here
#include "Bar.h"
#include "Foo.h"
#include <iostream>



namespace potd {


    Bar::Bar(std::string name){
        // Foo f;
        // (this->f_)(name);
        // Foo::count_++;
        Foo *point_Foo = new Foo(name);
        this->f_ = point_Foo;
        std::cout << "string" << std::endl;
    }

    Bar::Bar(const Bar &that){
        Foo *point_Foo = new Foo(that.f_->get_name());
        this->f_ = point_Foo;
        std::cout << "copy" << std::endl;
    }


    Bar & Bar::operator=(const Bar &that){
        // f_->~Foo();
        delete (this->f_);
        Foo *point_Foo = new Foo(that.f_->get_name());
        this->f_ = point_Foo;
        return *this;

    }



    // potd::Foo::Foo(std::string name) {
    //     this->name_ = name;
    //     Foo::count_++;
    // }


    Bar::~Bar() {
        f_->~Foo();
        // Foo::count_--;
    }


    std::string Bar::get_name(){
        return f_->get_name();
    }



}