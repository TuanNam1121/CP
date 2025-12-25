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

int n ;

string email(vector<string> s){
    string firstname = s[s.size() - 2];
    for(int i = 0 ; i < firstname.size() ; ++i){
        firstname[i] = tolower(firstname[i]);
    }  
    for(int i = 0 ; i < s.size() - 2; ++i){
        firstname += tolower(s[i][0]);
    }
    firstname += "@xyz.edu.vn";
    return firstname;
}

string password(string s){
    string pass = "";
    for(int i = 0 ; i < s.size() - 4; ++i){
        if(s[i] == '/' || s[i] == '0') continue;
        pass += s[i];
    }
    pass += s.substr(s.size() - 4, s.size() - 1);
    return pass;
}

int main() {
    fast_io();
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; ++i){
        string s; getline(cin, s);
        stringstream ss(s);
        vector<string> a;
        string temp;
        while(ss >> temp){
            a.push_back(temp);
        }
        cout << email(a) << endl;
        cout << password(a[a.size() - 1]) << endl;
    }
    return 0;
}
