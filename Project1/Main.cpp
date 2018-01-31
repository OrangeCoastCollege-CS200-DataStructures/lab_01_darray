#include "DArray.h"

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

const int START_10 = 10;
const int START_1000 = 1000;

void populateArray(DArray& arr, int numOfElem, int start);

#include "Other_Testing_Cases.h"
#include "Test_Move_Assign_Opr.h"
#include "Test_Move_Constructor.h"

int main( )
{
	test_emptyArray();
	test_more1than0();
	test_post4();	
	testMoveConstructor();
	testMoveAssignOpr();

	cout << endl;
	system("Pause");
    return 0;
}

void populateArray(DArray& arr, int numOfElem, int start)
{
	for (int i = start; i < (numOfElem + start); ++i)
		arr.addElement(i + numOfElem);
}

void call_emptyArray(DArray& a1)
{
	/*
	* 1) Write the declaration for function emptyArray in DArray.h
	* 2) Write the definition for function emptyArray in Functions.cpp
	* 3) Uncomment the function call below to test your implementation.
	*/

	a1.emptyArray();
}

void call_more1than0(DArray& a1, bool& outcome)
{
	/*
	* 1) Write the declaration for function more1than0 in DArray.h
	* 2) Write the definition for function more1than0 in Functions.cpp
	* 3) Uncomment the function call below to test your implementation.
	*/
	
	outcome = a1.more1than0();
}

void call_post4(DArray& a1, DArray& a2)
{
	/*
	* 1) Write the declaration for function post4 in DArray.h
	* 2) Write the definition for function post4 in Functions.cpp
	* 3) Uncomment the function call below to test your implementation.
	*/
	
	a1.post4(a2);
}

