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
// перегрузка оператора = для копирования
Array& Array::operator=(const Array& other) {
	if (!(this == &other)) {
		if (this->size != other.size) {
			delete this->arr;
			this->arr = new int[other.size];
		}
		this->size = other.size;
		int* dest{ this->arr };
		int* src{ other.arr };
		int* const end{ this->arr + this->size };
		while (dest < end) {
			*dest++ = *src++;
		}
	}
	return *this;
}