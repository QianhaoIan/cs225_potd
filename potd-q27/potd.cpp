// Your code here
#include "potd.h"
string getFortune(const string &s){

if (0 == s.length()%5){
	return "As you wish!";
}


if (1 == s.length()%5){
	return "Nec spe nec metu!";
}

if (2 == s.length()%5){
	return "Do, or do not. There is no try.";
}

if (3 == s.length()%5){
	return "This fortune intentionally left blank.";
}

if (4 == s.length()%5){
	return "Amor Fati!";
}

// if (s == "Where is the bug?"){
// 	return "Nec spe nec metu!";
// }

// if (s == "Should I eat that?"){
// 	return "Do, or do not. There is no try.";
// }

// if (s == "Why this segfault?!"){
// 	return "This fortune intentionally left blank.";
// }

// if (s == "What is on the exam?"){
// 	return "Amor Fati!";
// }

}