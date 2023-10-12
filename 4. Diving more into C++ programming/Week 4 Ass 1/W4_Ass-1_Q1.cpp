#include<iostream>
using namespace std;

int square(int n){
    return n*n;
}
void nsquares(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<square(i)<<endl;
    }
}



int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    nsquares(n);

}