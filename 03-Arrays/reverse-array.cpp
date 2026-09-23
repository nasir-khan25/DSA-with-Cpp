/*Reverses a dynamically allocated array using pointers and a while loop 
by swapping elements from both ends toward the center.*/

#include <iostream>
using namespace std;
int main ()
{
	int size = 0;
	cout << "Enter Size : ";
	cin >> size;
	
	int *arr = new int [size];
	int e=0;
	while (e<size)
	{
		cout << "Enter Element " << " : ";
		cin >> *(arr+e);
		e++;
	}
	
	int i = 0;
	int j = size - 1;
	
	while (i<j)
	{
		int temp = *(arr+i);
		*(arr+i) = *(arr+j);
		*(arr+j) = temp;
		i++;
		--j;
	}
	
	int k = 0;
	while (k<size)
	{
		cout << "Reversed Array " << " : " << *(arr+k) << endl;
		k++;
	}	
	
	delete[] arr;
	arr=nullptr;
}
