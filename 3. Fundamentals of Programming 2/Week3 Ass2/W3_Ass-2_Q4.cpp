#include<iostream>
using namespace std;
int main(){
    int n; char ch;
    cout<<"Enter the value of n: ";
    cin>>n;
    ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2!=0){
                cout<<char(ch+j);
            }
            else{
                cout<<j+1;
            }
            
        }
        cout<<endl;
    }
}