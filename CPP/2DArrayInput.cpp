#include<iostream>
using namespace std;
int main()
{
	int A[2][2];
	// take input from user using 2 for loops
	cout<<"Enter values of 2-D array A: "<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j = 0; j<2;j++)
		{
			cin>>A[i][j];
		}
	}
	// print 2-d Array values as output on console
	cout<<"Values of 2-D array A: "<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j = 0; j<2;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
