#include<iostream>
using namespace std;


double area(int radius){
    return 3.14*radius*radius;
}



int main(){
    int radius;
    cout<<"Enter the radius of the circle : ";
    cin>>radius;
    cout<<area(radius);

}