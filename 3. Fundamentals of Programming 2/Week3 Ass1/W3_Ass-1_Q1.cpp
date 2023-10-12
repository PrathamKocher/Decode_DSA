#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=n;i>0;i=i/10){
        int digit = i%10;
        if(digit % 2 == 0){
            sum = sum + digit;
        }
        
    }
    cout<<"Sum is : "<<sum<<endl;

}