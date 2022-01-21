#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool IsLeapYear(int y){
    return (((y % 4 == 0) && (y % 100 != 0)) ||
             (y % 400 == 0));
}
int main()
{
    int y;
    cout<<"Enter year to check: "<<endl;
    cin>>y;
    IsLeapYear(y)? cout<<"Leap Year":cout<<"Not a Leap Year";
    return 0;

}