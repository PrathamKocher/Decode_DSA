#include<iostream>
using namespace std;

int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}

int main(){
    string s;
    cin >> s;
    int count = 0;
    int ans=0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
    }

    for(int i=1;i<=count;i++){
        ans += fact(count)/(fact(count-i) * fact(i));
    }
    cout<<ans;
}