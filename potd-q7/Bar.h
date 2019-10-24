// your code here
#pragma once
#include "Foo.h"
#include <string>


namespace potd {
    class Bar {
        public:
           Bar(std::string);
           Bar(const Bar &); //copy 
           Bar & operator=(const Bar &); // overload=
           ~Bar();
           std::string get_name();

        private:
        	Foo * f_;

    };
}


// A private member variable Foo * f_.
// A constructor that takes a string.
// A copy constructor.
// --A destructor.
// An operator=.
// --A method string get_name() to return the name contained within f_.