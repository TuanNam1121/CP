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
    string s; getline(cin, s);
    map<string, int> mp;
    stringstream ss(s);
    string temp;
    while(ss >> temp){
        mp[temp]++;
    }
    string most, least;
    most = least = "0";
    int mostfre = 0, leastfre = INT32_MAX;

    for(map<string,int>::iterator it = mp.begin(); it != mp.end(); ++it){
        if(it->second > mostfre){
            most = it->first;
            mostfre = it->second;
        }
        else if(it->second == mostfre && it->first > most){
            most = it->first;
            mostfre = it->second;
        }
        if(it->second < leastfre){
            least = it->first;
            leastfre = it->second;
        }
        else if(it->second == leastfre && it->first > least){
            least = it->first;
            leastfre = it->second;
        }
    }
    cout << most << " " << mostfre << endl;
    cout << least << ' ' << leastfre << endl;


    return 0;
}