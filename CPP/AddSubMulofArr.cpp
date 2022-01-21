#include<iostream>
using namespace std;
int main()
{
    int A[3],B[3],add[3],sub[3],mul[3];
    cout<<"Enter the values of Array A:"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the values of Array B:"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>B[i];
    }
    cout<<"Addition of Arrya A and Array B is:"<<endl;
    for(int i=0;i<3;i++)
    {
        add[i]=A[i]+B[i];
        cout<<add[i]<<endl;
    }
    cout<<"Subtraction of Arrya A and Array B is:"<<endl;
    for(int i=0;i<3;i++)
    {
        sub[i]=A[i]-B[i];
        cout<<sub[i]<<endl;
    }
    cout<<"Multiplication of Arrya A and Array B is:"<<endl;
    for(int i=0;i<3;i++)
    {
        mul[i]=A[i]*B[i];
        cout<<mul[i]<<endl;
    }
}