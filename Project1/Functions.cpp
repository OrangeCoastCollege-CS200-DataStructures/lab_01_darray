/*
	(name header)
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


// Definition move constructor
// Your code here...


// Definition move assignment operator
// Your code here...

