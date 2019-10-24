#include "HuffmanNode.h"
#include "HuffmanUtils.h"
#include <string>
#include <iostream>
#include <stack>
#include <map>

using std::string;

/**
 * binaryToString
 *
 * Write a function that takes in the root to a huffman tree
 * and a binary string.
 *
 * Remember 0s in the string mean left and 1s mean right.
 */

string binaryToString(string binaryString, HuffmanNode* huffmanTree) {
	string r;
 	HuffmanNode* temp = huffmanTree;
	for (char& c : binaryString){
		if (c == '0') temp = temp->left_;
		else temp = temp->right_;
		if (temp->right_ == NULL && temp->left_ == NULL){
			r += temp->char_;
			temp = huffmanTree;
		}
	}
	return r;

}

/**
 * stringToBinary
 *
 * Write a function that takes in the root to a huffman tree
 * and a character string. Return the binary representation of the string
 * using the huffman tree.
 *
 * Remember 0s in the binary string mean left and 1s mean right
 */

// string stringToBinary(string charString, HuffmanNode* huffmanTree) {
// 	std::stack<HuffmanNode*> stk;
// 	stk.push(huffmanTree);
// 	HuffmanNode* cur = huffmanTree;
// 	char temp;
// 	for (char& c : binaryString){
// 		while(!stk.empty()){
// 			while(cur->left_ != NULL){
// 				stk.push(cur);
// 				cur = cur->left_;
// 			}
// 			if (cur->left_ == NULL){
// 				if (c == cur->char_){
// 					charString += path(stk);
// 					std::stack<HuffmanNode*> stk;
// 					break;
// 				}
// 				else {
// 					stk.pop();
// 				}
// 			}
// 			else {

// 			}




//get all character
void store_route (string str, HuffmanNode* node, map<char, string>& route){
	//base case
	if (node == NULL) return;

	if (node->left_ == NULL && node->right_ == NULL) {
		route[node->char_] = str;
		return;
	}

	//recursive
	store_route(str+'0', node->left_, route);
	store_route(str+'1', node->right_, route);
	return;

}



string stringToBinary(string charString, HuffmanNode* huffmanTree) {


	
	string result = "";
	map<char, string> route;
	//store route
	store_route(result, huffmanTree, route);
	for (char& c : charString){
		result += route[c];
	}

	return result;



}




