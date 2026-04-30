#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.size() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    if(q.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;

    queue<ll> que;
    q.push(6); q.push(8);
    vector<ll> a;
    while(a.size() < 100){
        ll dinh = q.front();
        q.pop();
        a.push_back(dinh);
        que.push(dinh * 10 + 6);
        que.push(dinh * 10 + 8);
    }
    for(ll i : a) cout << i << " ";
    return 0;
}