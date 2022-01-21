#include <iostream>
using namespace std;
int main(){
    int x,fact=1;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    while(x>0){
        fact*=x;
        x--;
    }
    cout<<fact;
}