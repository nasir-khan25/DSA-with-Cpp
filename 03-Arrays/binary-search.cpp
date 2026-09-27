//Implements Binary Search on a sorted array using a while loop and two-pointer boundaries.

#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Enter Size : ";
	cin >> n;
	cout << "\n";
	
	int *arr = new int [n];
	
	int i=0;
	while (i<n)
	{
		cout << "Enter Element " << (i+1) << " : ";
		cin >> *(arr+i);
		i++;
	}
	
	int key;
	cout << "\nEnter Key : ";
	cin >> key;
	
	int left=0;
	int right=n-1;
	
	bool found = false;
	
	while (left<=right)
	{
		int mid = ((left+right)/2);
		
		if (key<arr[mid])
		{
			right = mid-1;
		}
		
		else if (key==arr[mid])
		{
			cout << "Key Found at Index : " << mid;
			found = true;
			break;
		}
		
		else if (key>arr[mid])
		{
			left = mid+1;
		}
	}
	
	if (!found)
	{
		cout << "Key Not Found";
	}
	
	delete[] arr;
	arr = nullptr;
}
