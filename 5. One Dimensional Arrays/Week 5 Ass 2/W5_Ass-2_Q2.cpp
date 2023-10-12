#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int max1=INT_MIN+2, max2=INT_MIN+1, max3=INT_MIN;

    for(int i=0;i<5;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3){
            max1=arr[i];
        }
    }

    cout<<"Max1 :"<<max1<<endl;
    cout<<"Max2 :"<<max2<<endl;
    cout<<"Max3 :"<<max3<<endl;
}