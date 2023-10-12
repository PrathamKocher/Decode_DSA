#include<iostream>
using namespace std;
int main(){
    int x;
    int count=0;
    cin>>x;
    int arr[5];
    cout<<"Enter the 5 elements for the array : "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;

}