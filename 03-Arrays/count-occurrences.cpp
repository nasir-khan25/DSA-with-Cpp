//Counts how many times a given key occurs in a dynamically allocated array using a linear traversal.

#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Enter Size : ";
	cin >> n;
	cout << "\n";
	
	int *arr = new int[n];
	
	int i = 0;
	while (i<n)
	{
		cout << "Enter Value " << (i+1) << " : ";
		cin >> *(arr+i);
		i++;
	}
	
	int key;
	cout << "\nEnter Key : ";
	cin >> key;
	
	int count = 0;
	int k=0;
	while (k<n)
	{
		if (*(arr+k)==key)
		{
			count++;
		}
		
		k++;
	}
	
	cout << "\nOccurance Count : " << count;
	
	delete[] arr;
	arr = nullptr;
}
