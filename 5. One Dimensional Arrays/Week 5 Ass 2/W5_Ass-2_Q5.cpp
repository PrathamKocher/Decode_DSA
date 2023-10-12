#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,12,34,56,42};
    for(int i=0;i<5;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}