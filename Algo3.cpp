#include <iostream>
#include <vector>
using namespace std;

void printJagged(vector<vector<int>> jagged)
{
	for (int i = 0; i < jagged.size(); i++)
	{
		for (int j = 0; j < jagged[i].size(); j++)
		{
			cout << jagged[i][j] << " ";
		}
		cout << endl;
	}
}

void printVector(vector<int> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void swap(int* left, int* right)
{
	int temp = *left;
	*left = *right;
	*right = temp;
}

vector<int> mergeSort(vector<vector<int>> arr)
{
	int arrSize = 0;
	vector<int> returnVector;

	for (int i = 0; i < arr.size(); i++)
	{
		arrSize = arrSize + arr[i].size();
	}

	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			returnVector.push_back(arr[i][j]);
		}
	}
	
	//Bubble Sort
	int i, j;
	bool swapped;
	for (i = 0; i < arrSize; i++)
	{
		swapped = false;
		for (j = 0; j < arrSize - 1; j++)
		{
			if (returnVector[j] > returnVector[j + 1])
			{
				//LEFT OFF HERE
				swap(&returnVector[j], &returnVector[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}
	return returnVector;
}

int main()
{
	vector<int> arr1Row0 = { 2,5,9,21 };
	vector<int> arr1Row1 = { -1,0,2,1 };
	vector<int> arr1Row2 = { -10,81,121 };
	vector<int> arr1Row3 = { 4,6,12,20,150 };
	vector<vector<int>> Array_1 = { arr1Row0,arr1Row1,arr1Row2,arr1Row3 };
	
	vector<int> arr2Row0 = { 10,17,18,21,29 };
	vector<int> arr2Row1 = { -3,0,3,7,8,11 };
	vector<int> arr2Row2 = { 81,88,121,131 };
	vector<int> arr2Row3 = { 9,11,12,19,29 };
	vector<vector<int>> Array_2 = { arr2Row0,arr2Row1,arr2Row2,arr2Row3 };

	vector<int> arr3Row0 = { -4,-2,0,2,7 };
	vector<int> arr3Row1 = { 4, 6, 12, 14 };
	vector<int> arr3Row2 = { 10, 15, 25 };
	vector<int> arr3Row3 = { 5, 6, 10, 20, 24 };
	vector<vector<int>>	Array_3 = { arr3Row0,arr3Row1,arr3Row2,arr3Row3 };

	vector<int> Array_1_Sorted;
	vector<int> Array_2_Sorted;
	vector<int> Array_3_Sorted;

	Array_1_Sorted = mergeSort(Array_1);
	cout << "Array 1:" << endl;
	printJagged(Array_1);
	cout << endl;
	cout << "Array 1 Sorted:" << endl;
	printVector(Array_1_Sorted);
	cout << endl;

	cout << "Array 2:" << endl;
	Array_2_Sorted = mergeSort(Array_2);
	printJagged(Array_2);
	cout << endl;
	cout << "Array 2 Sorted:" << endl;
	printVector(Array_2_Sorted);
	cout << endl;

	cout << "Array 3:" << endl;
	Array_3_Sorted = mergeSort(Array_3);
	printJagged(Array_3);
	cout << endl;
	cout << "Array 3 Sorted:" << endl;
	printVector(Array_3_Sorted);
	cout << endl;
}

/*
def (jaggedArray S) 
//A jagged Array is a 2d array whose rows are of variable length
// n represents to
	arrSize = 0; //O(1)
	returnString; //O(1)
	
	for i in S:  //O(n)
		arrSize = arrSize + S[i].length //O(1)

	//The following code combines all 
	for i in S:	//O(1) is big O(1) because we only traverse the data set once
		for j in S[i]: //O(n)
			returnString.append(S[i][j]) //O(1)

	i, j = 0
	swapped = false

	Overall: O(n^2)
	for i in returnString: //O(n)
		swapped = false //O(1)
		for j in returnString: //O(n)
			if returnString[i] > returnString[j]: //O(1)
				swap(returnString[i], returnString[j]) //O(1)
				swapped = true //O(1)

		if swapped == true //O(1)
			break //O(1)

	return returnString //O(1)
*/