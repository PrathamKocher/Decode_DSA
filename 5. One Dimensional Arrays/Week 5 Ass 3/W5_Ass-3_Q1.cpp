#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[5];
    int count=0;
    cout<<"Enter the values of 5 elements of array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
                if((arr[i]+arr[j]+arr[k])==x){
                    count++;
                }
            }
        }
    }
    cout<<"So, total number of triplets having sum equal to x is: "<<count<<endl;

}