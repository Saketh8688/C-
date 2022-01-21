#include <iostream>
using namespace std;
int main()
{
    int n;
    long long int sum=0;
    cin>>n;
    //O(n) Complexity Solution
    if(n>0){
        for(int i=1;i<=n;i++){
            sum+=i;
        }
    }
    //Another Method in O(1) complexity
    cout<<sum<<endl;
    cout<<"**************"<<endl;
    sum=(n*(n+1))/2;
    cout<<sum;

}