#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    bool flag=true;

    for(int i=0;i<(s.size())/2;i++){
        if(s[i]!=s[(s.size())-i-1]){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"The given string is palindrome. ";
    }
    else{
        cout<<"The given string is not palindrome. ";
    }


}