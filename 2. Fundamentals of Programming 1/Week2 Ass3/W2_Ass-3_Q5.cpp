#include<iostream>
using namespace std;
int main(){
    int a,r,n;
    a=3;
    r=4;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<(a)<<" ";
        a*=r;
    }

}