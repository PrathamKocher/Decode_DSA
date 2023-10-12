#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,4,5,5};
    bool flag=false;

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"The array contains the duplicate values. ";
    }
    else{
        cout<<"The array doesn't contains duplicate values. ";
    }
}