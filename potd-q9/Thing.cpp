// Your code here!


#include "Thing.h"

using namespace potd;

Thing::Thing(int max_value){
	props_max_ = max_value;
	props_ct_ = 0;
	properties_ = new std::string[max_value];
	values_ = new std::string[max_value];
}



Thing::Thing(const Thing &old){
	_copy(old);
}



Thing & Thing::operator=(const Thing &old){
	//advoid memory leak
	if (this != &old) {
		_destroy();
		_copy(old);
	}
	return *this;
}



Thing::~Thing(){
	_destroy();
}




int Thing::set_property(std::string name,std::string value){
	//check whether we have the new name
	for (int i = 0; i < props_ct_; i++){
		if(properties_[i] == name){

			values_[i] = value;
			return 1;//successed
		}
	}

	if (props_ct_ >= props_max_) {
		return -1;//fall
	}
	
	//add new name and value
	properties_[props_ct_] = name;
	values_[props_ct_] = value;
	props_ct_++;
	return props_ct_ - 1;
}



std::string Thing::get_property(std::string name){
	for (int i = 0; i < props_ct_; i++){
		if(properties_[i] == name){
			return values_[i];
		}
	}
	return "";
}




void Thing::_copy(const Thing &old){
	// Thing* cur = new Thing[];
    props_ct_ = old.props_ct_;
    props_max_ = old.props_max_;
    properties_ = new std::string[props_max_];
    values_ = new std::string[props_max_];

    for (int i = 0; i < props_max_; i++){
    	properties_[i] = old.properties_[i];
		values_[i] = old.values_[i];
    }
}



void Thing::_destroy() {
	delete [] properties_;
	delete [] values_;
}





