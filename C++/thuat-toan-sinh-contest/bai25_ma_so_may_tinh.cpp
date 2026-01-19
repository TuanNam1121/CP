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

int n, character[100], number[100], charok, numok;

void ktaonum(){
    numok = 1;
    for(int i = 1; i <= n; ++i) number[i] = 1;
}

void ktaochar(){
    charok = 1;
    for(int i = 1; i <= n; ++i) character[i] = i;
}

void sinhnum(){
    int i = 2;
    while(i >= 1 && number[i] == n) --i;

    if(i == 0) numok = 0;
    else{
        number[i]++;
        for(int j = i + 1; j <= n; ++j) number[j] = 1;
    }
}

void sinhchar(){
    int i = 1;
    while(i >= 1 && character[i] > character[i + 1]) --i;

    if(i == 0) numok = 0;
    else{
        int j = n;
        while(character[j] < character[i]) --j;
        swap(character[i], character[j]);
        reverse(character + i + 1, character + n + 1);
    }
}

int main() {
    fast_io();
    cin >> n;
    ktaonum(); ktaochar();
    while(charok){
        while(numok){
            for(int i = 1; i <= n; ++i){
                cout << (char)(character[i] + 'A' - 1);
            }
            for(int i = 1; i <= n; ++i){
                cout << number[i];
            }
            cout << endl;
            sinhnum();
        }
        sinhchar();
        ktaonum();
    }
    return 0;
}