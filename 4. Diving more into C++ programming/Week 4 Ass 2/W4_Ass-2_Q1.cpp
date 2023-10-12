#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int* ptrx = &x;
    int* ptry = &y;
    int product;

    product= (*ptrx) * (*ptry); 
    cout<<product;
}