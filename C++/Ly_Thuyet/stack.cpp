#include <bits/stdc++.h>
using namespace std;
#define ll long long

// lifo

int main() {
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // cout << st.size() << endl;
    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // cout << st.empty() << endl;
    
    string s; cin >> s;
    stack<char> st;
    for(char i : s){
        if(i == '(') st.push(i);
        else if(i == ')') st.pop();
    }
    if(st.size() != 0) cout << "NO";
    else cout << "YES";
    return 0;
}