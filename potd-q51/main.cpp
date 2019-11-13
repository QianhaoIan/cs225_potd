#include "potd.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
	// test your code here!
	vector<string> xx = topThree("in1.txt");
	for (auto i : xx){
		cout << i << endl;
	}

	return 0;
}
