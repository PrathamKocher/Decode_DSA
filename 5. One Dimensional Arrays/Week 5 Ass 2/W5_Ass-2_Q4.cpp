#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,45,8,9,60};
    int sumo=0;
    int sume=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            sume+=arr[i];
        }
        else{
            sumo+=arr[i];
        }
    }
    cout<<"The sum of all the even elements is: "<<sume<<endl;
    cout<<"The sum of all the odd elements is: "<<sumo<<endl;
}