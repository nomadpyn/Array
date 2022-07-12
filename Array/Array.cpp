#include "Array.h"
#include<iostream>

using namespace std;
//перегрузка оператора вывода
ostream& operator << (ostream& output, const Array& obj) {
	for (int i = 0; i < obj.size; i++)
		output << obj.arr[i] << " ";
	cout << endl;
	return output;
}
// перегрузка опертора ввода
istream& operator >>(istream& input, Array& obj) {
	for (int i = 0; i < obj.size; i++)
		input >> obj.arr[i];
	return input;
}
// фукнция случайного заполнения массива
void Array::randomize() {
	for (int i = 0; i < this->size; i++)
		arr[i] = rand() % 25;
}