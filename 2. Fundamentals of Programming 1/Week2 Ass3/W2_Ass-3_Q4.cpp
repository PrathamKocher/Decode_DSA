#include<iostream>
using namespace std;
int main(){
    int a,n,d;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of d: ";
    cin>>d;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a+(i-1)*d<<" ";
    }

}