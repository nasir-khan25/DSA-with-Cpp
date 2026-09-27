////Implements sequential search using a while loop to find a key in an array.

#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Enter Size : ";
	cin >> n;
	
	int *arr = new int[n];
	
	for (int i=0; i<n; i++)
	{
		cout << "Enter Element " << (i+1) << " : ";
		cin >> *(arr+i);
	}
	
	int key;
	cout << "\nEnter Key : ";
	cin >> key;
	
	int i = 0;
	while (i<n && *(arr+i)!=key)
	{
		i++;
	}
	
	if (i<n)
	{
		cout << "Key Found at Index : " << i;	
	}
	
	else 
	cout << "Key Not Found";
	
	delete[] arr;
	arr = nullptr;	
}
