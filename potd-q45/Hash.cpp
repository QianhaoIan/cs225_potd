#include <vector>
#include "Hash.h"

void doubleHashInput(std::vector<int> &v, int elem){
	//your code here
  int idx = 0;
  int size = v.size();

  idx = firstHash(elem,size);
  if (v[idx] != -1){
    //secondHash part
    do{
      idx = (idx + secondHash(elem)) % size;
    }while(v[idx] != -1); //first time to try do-while
    v[idx] = elem;
  }
  else{
    v[idx] = elem;
  }
}

//make a hash function called firstHash
int firstHash(int elem, int length){
  int output = 0;
  output = elem * 4 % length;
  return output;
}

//make a second function called secondHash
int secondHash(int elem){
  int output = 0;
  output = 3 - elem % 3;
  return output;
}
