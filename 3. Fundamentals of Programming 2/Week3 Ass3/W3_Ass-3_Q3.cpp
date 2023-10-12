#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<char(ch+i-k+1);
        }


        for(int j=0;j<=i;j++){
            cout<<char(ch+j);
        }
        cout<<endl;
    }
}