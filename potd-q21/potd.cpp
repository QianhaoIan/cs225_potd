#include "potd.h"

// Your code here!

double sum(vector<double>::iterator start, vector<double>::iterator end){
	double sum_num = 0;
	for (auto i = start; i != end; ++i){
		sum_num += *i;
	}
	return sum_num;
}


vector<double>::iterator max_iter(vector<double>::iterator start, vector<double>::iterator end){
	//force brute
	double max_num = 0;
	double cur_num = 0;
	vector<double>::iterator goal_iter = start;
	for (auto i = start; i != end; ++i){
		cur_num = *i;
		if (cur_num > max_num){
			max_num = cur_num;
			goal_iter = i;
		}
	}
	return goal_iter;
}


void sort_vector(vector<double>::iterator start, vector<double>::iterator end){
	vector<double>::iterator curMax_iter = start;
	double tem;
	for (auto i = start; i != end; ++i){
		curMax_iter = max_iter(i, end);
		tem = *i;
		*i = *curMax_iter;
		*curMax_iter = tem;
	}
}






