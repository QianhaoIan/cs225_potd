/* Your code here! */
#include "hello.h"
#include <iostream>

std::string hello(){
	std::string age = "23"; //scaring thing
	std::string name = "Qianhao Luo";
  std::string result;
	//"Hello world! My name is your_name and I am your_age years old."
	result = "Hello world! My name is ";
  result.append(name);
  result.append(" and I am ");  
	result.append(age);
  result.append(" years old.");

  return result;

}