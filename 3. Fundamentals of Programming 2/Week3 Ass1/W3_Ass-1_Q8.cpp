#include<iostream>
using namespace std;
int main(){
    int n,a,b,sum;
    a=1;
    b=1;
    cout<<"Enter valude of n: ";
    cin>>n;

    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<sum;
    

        
}
    
