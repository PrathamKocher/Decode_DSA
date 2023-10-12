#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<2*n-1;j++){
            if((i+j)==(n-1) || j==(n-1+i)){
                cout<<i+1;
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    
    }
}