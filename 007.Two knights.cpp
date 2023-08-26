#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        ll k1 = i*i , k2 = k1*(k1-1)/2;
        if(i>2){
            k2-=4*(i-1)*(i-2);
        }
        cout<<k2<<'\n';
    }

}