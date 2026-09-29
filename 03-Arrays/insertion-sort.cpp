/*Implements Insertion Sort on a dynamically allocated array by shifting 
larger elements and inserting each element into its correct position.*/

#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Enter Size : ";
	cin >> n;
	
	int *arr = new int [n];
	
	for (int i=0; i<n; i++)
	{
		cout << "Enter Element " << (i+1) << " : ";
		cin >> *(arr+i);
	}
	
	for (int i=1; i<n; i++)
	{
		int temp = *(arr+i);
		int j = i-1;
		
		while (j>=0 && *(arr+j)>temp)
		{
			*(arr+j+1) = *(arr+j);
			j--;
		}
		
		*(arr+j+1) = temp;
	}
	
	cout << "\nInsertion Sorted Array : ";
	for (int i=0; i<n; i++)
	{
		cout << *(arr+i) << " ";
	}
	
	delete[] arr;
	arr = nullptr;
}
