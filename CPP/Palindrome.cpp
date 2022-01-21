#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number: "<<endl;
    int n,rev=0,num;
    cin>>num;
    n=num;
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    if(n==rev){
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}