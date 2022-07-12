﻿#pragma once
class Array
{
private:
	int size;
	int* arr;
public:
// конструкторы с параметрами
	Array(const int sizeP) : size{ sizeP } {
		this->arr = new int[this->size]{};
	}
	Array(const int* arrP, const int sizeP) : size{ sizeP } {
		this->arr = new int[this->size]{};
		for (int i = 0; i < this->size; i++)
			this->arr[i] = arrP[i];
	}
// конструктор по умолчанию
	Array():Array(3){}
// конструктор копирования
	Array(const Array& other) : size{ other.size }, arr{ new int[other.size] } {
		for (int i = 0; i < this->size; i++)
			this->arr[i] = other.arr[i];
	}
// деструктор
	~Array() {
		delete[] this->arr;
	}
};

