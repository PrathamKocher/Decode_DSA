#include<iostream>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    int len=s.size();

    if(s.size()%2!=0){
        cout<<"Invalid Input. ";
    }
    else{
        reverse(s.begin()+len/2,s.end());
    }
    cout<<s;

}