#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    int maxi = 0;
    ll ans = 0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        maxi = max(maxi,x);
        ans+=maxi-x;
    }
    cout<<ans;
}