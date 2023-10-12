#include<iostream>
using namespace std;
int main(){
    int n; char ch;
    cout<<"Enter the value of n: ";
    cin>>n;
    ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)(ch+j);
        }
        cout<<endl;
    }
}