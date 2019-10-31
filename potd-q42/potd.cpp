#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

unordered_map<string, int> common_elems(unordered_map<string, int>& mapA,
										unordered_map<string, int>& mapB) {
	unordered_map<string, int> mapC;
	std::vector<string> v;
	string s;
	for (auto i = mapA.begin(); i != mapA.end(); i++){
		s = i->first;
		if (mapB.find(s) != mapB.end()){
			mapC[s] = mapA[s] + mapB[s];
			v.push_back(s);
		}
	}

	for (auto it : v){
		mapA.erase(it);
		mapB.erase(it);
	}


	cout << "------" << endl;
	for (auto i = mapA.begin(); i != mapA.end(); i++){
		cout << i->first << " " << i->second <<  endl;
	}

	cout << "------" << endl;
	for (auto i = mapB.begin(); i != mapB.end(); i++){
		cout << i->first << " " << i->second <<  endl;
	}

	cout << "------" << endl;
	for (auto i = mapC.begin(); i != mapC.end(); i++){
		cout << i->first << " " << i->second <<  endl;
	}
	return mapC;
} 