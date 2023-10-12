#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,32,3,74,25,66};
    int max1=INT_MIN;
    int max2=INT_MIN;

    for(int i=0;i<6;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        if(arr[i]<max1 && arr[i]>max2){
            max2=arr[i];
        }
    }
    cout<<"Second largest element in the given array is: "<<max2;
    
}
