#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int mini=INT_MAX;

    for(int i=0;i<5;i++){
        if(arr[i]<mini){
            mini = min(mini,arr[i]);
        }
    }
    cout<<"Minimum value in the  given array is : "<<mini;
}