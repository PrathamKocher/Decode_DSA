#include<iostream>
using namespace std;
int main(){
    int n;
    int in=1;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(j>n-i-1 && j<n+i-1 && i>0){
                cout<<" ";
            }
            else{
                if(j>n-1){
                    cout<<2*n-j-1;
                }
                else
                    cout<<in+j;
            }
           
        }
        cout<<endl;
    }
}   
