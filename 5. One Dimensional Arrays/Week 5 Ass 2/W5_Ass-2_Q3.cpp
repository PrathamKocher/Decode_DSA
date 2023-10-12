#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,5,19,8};
    bool flag =true;
    for(int i=0;i<4;i++){
        if(arr[i]<arr[i+1]){
            flag=true;
        }
        else{
            flag=false;
        }
    }
    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"No";
    }

}