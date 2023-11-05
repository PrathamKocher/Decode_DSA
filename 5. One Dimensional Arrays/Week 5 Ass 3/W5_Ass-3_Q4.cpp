#include <iostream>
using namespace std;
int main(){
int arr[] = { 0, 6, 0, 7, 6, 0, 9, 1 };
int n=sizeof(arr)/sizeof(arr[0]);
int j=n-1;
for(int i=n-1;i>=0;i--){
    if(arr[i]==0){
        swap(arr[i],arr[j]);
        j--;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }

}