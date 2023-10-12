#include<iostream>
using namespace std;
int main(){
    int n, rev=0;
    cin>>n;
    for(int i=n;i>0;i=i/10){
        int digit=i%10;
        rev=10*rev+digit;

        
    }
    cout<<"Sum is: "<<rev+n;
}