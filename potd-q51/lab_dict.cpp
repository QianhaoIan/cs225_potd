#include <iostream>
#include <vector>
using namespace std;


vector<int> expectedSum(vector<int> origin, int temp){
	int flag = 0; //the flag of end
	vector<int> list_s;

	//calculate the list items
	for (int i = origin.size() - 1; i >= 0; i--){
		while(1){
			temp -= origin[i];
			if (temp > 0){
				list_s.push_back(origin[i]);
			}
			else if (temp == 0){
				list_s.push_back(origin[i]);
				flag = 1;
				break;
			}
			else {
				temp += origin[i];
				break;
			}
		}
		if (flag == 1){
			break;
		}
	}

	return list_s;
}





int main(){
	int S = 1221;
	int temp = S;
	int E[8] = {1, 2, 5, 7, 11, 18, 25, 300};
	vector<int> origin;
	vector<int> list_s;
	for (auto i : E){
		origin.push_back(i);
	}

	//function
	list_s = expectedSum(origin, s);

	// output the list
	for (auto i : list_s){
		cout << i << endl;
	}
	
	return 0;
}






