#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rep2(i, j, a, b, c, d)      \
    for (int i = (a); i < (b); ++i) \
        for (int j = (c); j < (d); ++j)

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve(string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1')
        {
            int t = 3;
            while (--t)
            {
                s.erase(i);
            }
        }
    }

    if(s.size() == 0) cout << "EMPTY";
    else cout << s; 
}

int main()
{
    fast_io();
    string s;
    cin >> s;
    solve(s);
    return 0;
}