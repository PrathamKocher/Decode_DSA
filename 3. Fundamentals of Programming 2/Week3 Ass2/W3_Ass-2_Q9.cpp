#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<char(j+ch-1);
        }

        cout<<endl;
    }
}