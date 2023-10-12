#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=2*n;j++){
            if((i+j)==(n) || j==(n+i) || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=2*n;j++){
            if(j==i || j==(2*n-i) || i==0 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}