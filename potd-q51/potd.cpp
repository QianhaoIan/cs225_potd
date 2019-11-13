#include <map>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;


vector<string> topThree(string filename) {
    string line;
    ifstream infile (filename);
    vector<string> ret;

    std::vector<string> temp;
    map<string, int> count_map;
    if (infile.is_open()) {
        while (getline(infile, line)) {
            count_map[line]++;
        }
    }


    pair<string, int> a,b,c;
    a.second = 0;
    b.second = 0;
    c.second = 0;

    for (auto item : count_map){
        if (item.second > a.second){
            c = b;
            b = a;
            a.first = item.first;
            a.second = item.second;
        }
        else if (item.second > b.second){
            c = b;
            b.first = item.first;
            b.second = item.second;
        }
        else if (item.second > c.second){
            c.first = item.first;
            c.second = item.second;
        }
    }

    infile.close();

    ret.push_back(a.first);
    ret.push_back(b.first);
    ret.push_back(c.first);
    return ret;
}

