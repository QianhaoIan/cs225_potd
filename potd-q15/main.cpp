#include "potd.h"
#include <iostream>
using namespace std;

int main() {
  // Test 1: An empty list
  Node * head = NULL;
  cout << stringList(head) << endl;

  // Test 2: A list with exactly one node
  Node one = {
    1,
    NULL,
  };
  Node * test2 = &one;
  cout << stringList(test2) << endl;

  // Test 3: A list with more than one node

  Node one_3 = {
    300,
    NULL,
  };

  Node one_2 = {
    200,
    &one_3,
  };

  Node one_1 = {
    100,
    &one_2,
  };

  Node * test3 = &one_1;
  cout << stringList(test3) << endl;



  return 0;
}
