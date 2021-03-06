#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

const int CAPACITY = 50;

class DArray
{
	friend ostream& operator<<(ostream& out, const DArray& theArray);
		// Overloaded insertion operator to print array

public:
	DArray();
		// Initializes array to CAPACITY.

	DArray(int newCapacity);
		// Initializes array to newCapacity.

	DArray(const DArray& otherArray); 
		// Copy constructor
	
    void addElement(int newElement);
		// Inserts newElement to the end of the array.

	int getNumOfElements() const;
		// Returns the number of elements in the array.

	DArray& DArray::operator=(const DArray&);
		// Overloaded assignment operator

	~DArray( ); 
		// Destructor

	/**********************************************************************/
	
	// Declaration function emptyArray
	void emptyArray();

	
	// Declaration function more1than0
	bool more1than0();


	// Declaration function post4
	void post4(DArray& other) const;

	
	// Declaration move constructor
	DArray(DArray&& other);
	

	// Declaration move assignment operator
	DArray& operator=(DArray&& other);
	


private:
    int *a;			
    int capacity;	
    int numOfElements;		
};

#endif