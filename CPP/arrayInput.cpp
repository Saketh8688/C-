#include<iostream>
using namespace std;
int main()
{
	// datatye array-name[size] ;
	int arr[3] = {1,2,3}; // integer array declaration & initialization
	double arr1[5]; // double array declaration
	arr1[0] = 1.456; // individual array element assignment
	arr1[1] = 36.765;
	
	char myarr[4]; // character array declaration
	myarr[0]='a';// individial array element assignment
	
	int temp_arr[5];
	cout<<"Enter 5 integer variables"<<endl;
	// taking input into array from user using for loop
	for(int i=0;i<5;i++)
	{
		cin>>temp_arr[i];
	}
	// displaying array values using for loop
	cout<<"The values you entered are:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<temp_arr[i]<<endl;
	}
	return 0;
}