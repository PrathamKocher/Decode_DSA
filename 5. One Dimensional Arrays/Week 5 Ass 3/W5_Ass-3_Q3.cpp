#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,1,2,3,5};
    for(int i=0;i<5;i++){
        bool flag=false;
        for(int j=0;j<5;j++){
            if(i!=j & arr[i]==arr[j]){
                flag=false;
                break;
            }
            else{
                flag=true;
            }
        }
        if(flag==true){
            cout<<arr[i];
            break;
        }
    }

}