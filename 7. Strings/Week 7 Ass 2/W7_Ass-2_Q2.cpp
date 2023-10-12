#include<iostream>
#include<string>
using namespace std;
int main() {
    string p;
    cin >> p;
    int max1=-1;
    int max2=-2;
    for(int i=0;i<p.size();i++){
        string s = p.substr(i,1);
        int n= stoi(s);
        if(n>max1){
            max2=max1;
            max1=n;
        }
        if(n<max1 && n>max2){
            max2=n;
        }
    }
    cout<<"Max 1: "<<max1<<endl;
    cout<<"Max 2: "<<max2;
}