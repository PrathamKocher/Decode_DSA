#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    cout<<"Total number of consonants in the string is : "<<s.size()-count;
}