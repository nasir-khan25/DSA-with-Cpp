/*Counts positive, negative, and zero elements in a dynamically 
allocated array using pointers and while loops.*/

#include <iostream>
using namespace std;
int main ()
{
	int n=0;
	cout << "Enter Size : ";
	cin >> n;
	
	int *arr = new int [n];
	
	int e = 0;
	while (e<n)
	{
		cout <<"Enter Values : ";
		cin >> *(arr+e);
		e++;
	}
	
	int positiveCount = 0;
	int negativeCount = 0;
	int zeroCount = 0;
	
	int i = 0;
	while (i<n)
	{
		if (*(arr+i)>0)
		{
			positiveCount++;
		}
		
		else if (*(arr+i)<0)
		{
			negativeCount++;
		}
		
		else
		{
			zeroCount++;
		}
		
		i++;
	}
	
	cout << "\nPositive Count : " << positiveCount;
	cout << "\nNegative Count : " << negativeCount;
	cout << "\nZero Count : " << zeroCount;
	
	delete[] arr;
	arr = nullptr;
}
