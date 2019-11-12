#include "Pattern.h"
#include <string>
#include <iostream>
#include <map>
using namespace std;


bool wordPattern(std::string pattern, std::string str) {
    if (pattern.empty()){
      return false;
    }

    //write your code here
    map<char, string> map1;
    string temp;
    int count = 0;
    for (auto ch : str){
      if (ch == ' '){
        string value = temp;
        char key = pattern[count];
        //if key is not in the map
        if (map1.find(key) == map1.end()){
          map1[key] = value;
        }
        else{
          if (map1[key] != value){
            return false;
          }
        }
        temp = "";
        count++;
        continue;
      }
      else{
        temp.push_back(ch);
      }
    }

    if (temp != " "){
      string value = temp;
      char key = pattern[count];
      if (map1.find(key) == map1.end()){

      }
      else{
        if (map1[key] != value){
          return false;
        }
      }
      count++;
    }


    if (count != int(pattern.length())) {
      return false;
    }
    cout << "1" << endl;
    return true;
}
