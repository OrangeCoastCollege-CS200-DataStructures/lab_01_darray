#include "Other_Testing_Cases.h"

vector <vector<int>> v1 = { { 1, 4, 1 },
{ 1, 0, 1, 0 },
{ 1, 1 },
{ 1, 6, 8 },
{ 1 },
{ 1, 0 },
{ 6, 1, 1 },
{ 1, 3, 0 },
{ 1, 1, 0, 0, 1 },
{ 1, 1, 4, 0, 0, 1 },
{ 3 },
{ 0, 1, 0, 7 },
{ 0, 1, 0, 5, 1 },
{ 1, 0, 1, 0, 1, 9 } };

vector<bool> outcome1 = { true, false,
true, true, true, false,
true, false, true, true,
false, false, false, true };

vector<vector<int>> v2 = { { 2, 4, 1, 2 },
{ 4, 1, 4, 2 },
{ 4, 4, 1, 2, 3 },
{ 4, 2 },
{ 4, 4, 3 },
{ 4, 4 },
{ 4 },
{ 2, 4, 1, 4, 3, 2 },
{ 4, 1, 4, 2, 2, 2 },
{ 3, 4, 3, 2 } };

vector<vector<int>> outcome2 = { { 1, 2 },
{ 2 },
{ 1, 2, 3 },
{ 2 },
{ 3 },
{},
{},
{ 3, 2 },
{ 2, 2, 2 },
{ 3, 2 } };

void test_emptyArray()
{
	ostream_iterator<int> screen1(cout, " ");
	cout << "\n------------------------------------------\n";

	cout << "TESTING CASES FOR emptyArray:\n\n";
	int v2HalfSize = static_cast<int>(v2.size()) / 2;
	for (int i = 0; i < v2HalfSize; ++i)
	{
		int innerSize2 = static_cast<int>(v2[i].size());
		DArray da2(v2HalfSize);
		for (int j = 0; j < innerSize2; ++j)
			da2.addElement(v2[i].at(j));

		call_emptyArray(da2);
		cout << "Array: ";
		copy(v2[i].begin(), v2[i].end(), screen1);
		cout << "\n       Expected: (empty)";
		cout << "\n    Your output: ";
		if (da2.getNumOfElements() == 0) cout << "(empty)";
		else cout << da2;
		cout << endl;
	}
}

void test_more1than0()
{
	ostream_iterator<int> screen1(cout, " ");

	cout << "\n------------------------------------------\n";
	cout << "TESTING CASES FOR more1than0:\n\n";

	int v1Size = static_cast<int>(v1.size());
	for (int i = 0; i < v1Size; ++i)
	{
		int innerSize1 = static_cast<int>(v1[i].size());
		DArray da1(innerSize1);
		for (int j = 0; j < innerSize1; ++j)
			da1.addElement(v1[i].at(j));

		cout << "Array: ";
		copy(v1[i].begin(), v1[i].end(), screen1);
		cout << "\n       Expected: ";
		cout << ((outcome1[i]) ? "true" : "false");
		cout << "\n    Your output: ";
		bool outcome = false;
		call_more1than0(da1, outcome);
		cout << ((outcome) ? "true" : "false");
		cout << endl;
	}
}

void test_post4()
{
	ostream_iterator<int> screen1(cout, " ");
	cout << "\n------------------------------------------\n";

	cout << "TESTING CASES FOR post4:\n\n";
	int v2Size = static_cast<int>(v2.size());
	for (int i = 0; i < v2Size; ++i)
	{
		int innerSize2 = static_cast<int>(v2[i].size());
		DArray da2(v2Size);
		for (int j = 0; j < innerSize2; ++j)
			da2.addElement(v2[i].at(j));

		DArray da2param(v2Size);
		call_post4(da2, da2param);
		cout << "Array: ";
		copy(v2[i].begin(), v2[i].end(), screen1);
		cout << "\n       Expected: ";
		if (outcome2[i].empty()) cout << "(empty)";
		else copy(outcome2[i].begin(), outcome2[i].end(), screen1);
		cout << "\n    Your output: ";
		if (da2param.getNumOfElements() == 0) cout << "(empty)";
		else cout << da2param;
		cout << endl;
	}
}


