/*Counts the number of even and odd elements in a dynamically allocated array 
using pointers and a while loop.*/

#include <iostream>
using namespace std;

int main ()
{
	int n = 0;
	cout << "Enter Size : ";
	cin >> n;
	
	int *arr = new int [n];
	
	for (int i=0; i<n; i++)
	{
		cout << "Enter Values : ";
		cin >> *(arr+i);
	}
	
	int evenCount = 0;
	int oddCount = 0;
	
	int i = 0;
	
	while (i<n)
	{
		if (*(arr+i)%2==0)
		{
			evenCount++;
		}
		
		else 
		{
			oddCount++;
		}
		
		i++;
	}
	
	cout << "\nEven Count : " << evenCount;
	cout << "\nOdd Count : " << oddCount;
	
	delete[] arr;
	arr = nullptr;
}
