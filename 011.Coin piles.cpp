#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<((a+b)%3==0 && 2*a>=b&&2*b>=a?"YES":"NO")<<'\n';
    }
}