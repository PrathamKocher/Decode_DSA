#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<2*n-1;j++){
            if((i+j)==(n-1) || j==(n-1+i)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(j==i || j==(2*n-2-i)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}