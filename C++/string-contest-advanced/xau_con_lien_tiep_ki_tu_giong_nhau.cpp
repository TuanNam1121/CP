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

int main() {
    fast_io();
    string s; cin >> s;
    s += '@';
    char res = '@';
    int resfre = 0;

    char a = s[0];
    int fre = 1;
    for(int i = 1 ; i < s.size(); ++i){
        if(s[i] == s[i-1]){
            fre++;
        }
        else{
            if(fre > resfre ||(fre == resfre && a > res)){
                res = a;
                resfre = fre;
                a = s[i];
                fre = 0;
            }
        }
    }
    for(int i = 0 ; i < resfre ; ++i){
        cout << res;
    }
    return 0;
}