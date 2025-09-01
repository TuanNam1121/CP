#include <bits/stdc++.h>
using namespace std;
#define ll long long

string bin(int a){
    if(a == 0) return "";
    string temp = bin(a / 2);
    if(a % 2 == 0) return temp + "0";
    else return temp + "1";
}

int main(){
    ll n; cin >> n;
    cout << bin(n);
}