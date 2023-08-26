#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans = 1;
    int maxi = 0;
    char c = 'A';
    for(char ch : s){
        if(ch == c){
            maxi++;
            ans = max(maxi,ans);
        }else{
            c = ch;
            maxi = 1;
        }
    }
    cout<<ans;
}