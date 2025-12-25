#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define rep2(i,j,a,b,c,d) for (int i = (a); i < (b); ++i) for (int j = (c); j < (d); ++j)


void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int m = 1e6 + 7;
bool nt[m];

void sieve(){
    nt[0] = 0;
    nt[1] = 0;

    for(int i = 2; i < m; ++i){
        nt[i] = 1;
    }

    for(int i = 2; i < m; ++i){
        if(nt[i] == 1 && 1LL * i * i <= m){
            for(int j = i * i; j < m; j += i){
                nt[j] = 0; 
            }
        }
    }
}

bool beautifulNumber(string s){
    int sum = 0;
    for(char i : s){
        if(i == '2' || i == '3' || i == '5' || i == '7'){
            sum += i - '0';
        }
        else return false;
    }
    cout << sum;
    return nt[sum];
}

int main() {
    fast_io();
    sieve();
    string s; cin >> s;
    if(beautifulNumber(s)) cout << "YES";
    else cout << "NO";
    return 0;
}