#include<iostream>
using namespace std;
int main(){
    string s="proud to be pwians";
   

    string word="";
    string maxword="";
    int n=s.size();

    for(int i=0;i<n;i++){
        if(s[i]==' '){
            maxword = max(maxword , word);
            word = "";
        }
        else{
            word += s[i];
        }
    }

    maxword=max(maxword,word);
    cout<<"Output :"<< maxword;
}