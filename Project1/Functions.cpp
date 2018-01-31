/*
	Badajoz, Seve

	CS A200
	January 31, 2018

	Lab 01
*/

#include "DArray.h"

// Definition function emptyArray
void DArray::emptyArray() {
	numOfElements = 0;
}


// Definition function more1than0
bool DArray::more1than0() {
	int num0 = 0;
	int num1 = 0;
	for (int i = 0; i < numOfElements; i++) {
		num0 += a[i] == 0;
		num1 += a[i] == 1;
	}
	return num1 > num0;
}


// Definition function post4
void DArray::post4(DArray& other) const {
	int indexOf4;
	for (int i = numOfElements - 1; i > -1; i--) {
	if (a[i] == 4) {
		indexOf4 = i;
		i = -1;
	}
}
	for (int i = 0; i < numOfElements - indexOf4 - 1; i++)
		other.addElement(a[indexOf4 + 1 + i]);
}

// Definition move constructor
DArray::DArray(const DArray&& other) {
	numOfElements = other.numOfElements;
	capacity = other.capacity;
	a = other.a;
	other.~DArray();
}


// Definition move assignment operator
// Your code here...

