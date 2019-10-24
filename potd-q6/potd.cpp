// your code here!
#include "potd.h"
#include  <math.h>
#include <iostream>

int *potd::raise(int *arr){
	// int first, second;
	int length = 1;
	for (int i = 0; *(arr+i) > 0; i++){
		length ++;
	}
	// std::cout << length << std::endl;
	// std::cout << std::endl;
	int *array = new int[length];
	for (int i = 0; i < length ; i++){ //*(arr+i+2) != -1
		if (i >= length - 2)	
			*(array+i) = *(arr+i);
		else
			*(array+i) = pow(*(arr+i), *(arr+i+1));
	}
	// for (int i = 0; i < length; i++){
	// 	std::cout << *(array+i) << ' ' << std::endl;
	// }

	return array;
}