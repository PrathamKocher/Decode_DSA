#include<iostream>
using namespace std;

void printNumbers(int a, int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    printNumbers(a,b);


}