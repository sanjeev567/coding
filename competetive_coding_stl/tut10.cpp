// C++ code to demonstrate working of iota()
#include<iostream>
#include<numeric> // for iota()
using namespace std;
int main()
{
	// Initializing array with 0 values
	int ar[] = {0,12,3,4,5,6,7,7};

	// Using iota() to assign values
	iota(ar, ar+12, 10);

	// Displaying the new array
	cout << "The new array after assigning values is : ";
	for (int i=0; i<12 ; i++)
	cout << ar[i] << " ";

	return 0;

}
