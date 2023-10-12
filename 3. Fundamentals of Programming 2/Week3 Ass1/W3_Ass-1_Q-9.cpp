#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cin>>n;
    for(int i=n;i>0;i=i/10){
        int digit = i%10;
        sum = sum + digit * digit * digit;
    }
    cout<<"Sum is: "<<sum<<endl;
    if(sum==n){
        cout<<"The given number is armstrong number. ";
    }
    else{
        cout<<"The given number is not armstrong number. ";
    }

}