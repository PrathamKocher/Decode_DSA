#include<iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(t==s){
        cout<<"Yes, they are anagram.";
    }
    else{
        cout<<"No, they are not anagram.";
    }



}