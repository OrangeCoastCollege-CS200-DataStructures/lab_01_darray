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
		num1 += a[i] == 0;
	}
	return num1 > num0;
}


// Definition function post4
void DArray::post4(DArray& other) const{
	int indexOf4;
	for (int i = numOfElements - 1; i > -1; i--) 
		if (a[i] == 4) indexOf4 = i;
	for (int i = 0; i < indexOf4; i++) {
		other.a[i] = a[indexOf4 + 1 + i];
		other.numOfElements += 1;
	}
}

// Definition move constructor
// Your code here...


// Definition move assignment operator
// Your code here...

