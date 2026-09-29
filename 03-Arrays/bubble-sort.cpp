/*Implements Bubble Sort on a dynamically allocated array using adjacent 
element comparisons, swapping, and an early-exit optimization.*/


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
	
	bool alreadySorted = false;
	
	for (int i=0; i<n-1; i++)
	{
		bool swapp = false;
		
		for (int j=0; j<n-1-i; j++)
		{
			if (*(arr+j)>*(arr+j+1))
			{
				int temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
				swapp = true;
			}
		}
		
		if (!swapp)
		{
			if (i==0)
			{
				alreadySorted = true;
			}
			
			break;
		}
	}
	
	if (alreadySorted)
	{
		cout << "\nArray is already sorted";
	}
	
	else 
	{
		cout << "\nSorted Array : ";
		for (int i=0; i<n; i++)
		{
			cout << *(arr+i) << " ";
		}
	}	
	
	delete[] arr;
	arr = nullptr;
}
