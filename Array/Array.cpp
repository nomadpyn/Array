#include "Array.h"
#include<iostream>

using namespace std;

ostream& operator << (ostream& output, const Array& obj) {
	for (int i = 0; i < obj.size; i++)
		output << obj.arr[i] << " ";
	cout << endl;
	return output;
}