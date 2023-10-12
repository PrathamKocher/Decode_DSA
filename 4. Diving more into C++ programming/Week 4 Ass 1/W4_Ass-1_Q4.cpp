#include<iostream>
using namespace std;

int square(int n){
    return n*n;
}

int countNumberOfDigits(int num){
    int count=0;
    for(int i=num;i>0;i=i/10){
        count++;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<countNumberOfDigits(num)<<endl;
    cout<<square(num);
}