#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    string b = "aaabnn";
    int s = b.size();
    int n = 0;
    do{
        cout << b << endl;
        ++n;
    }while(next_permutation(b.begin(), b.end()));
    cout << n;
}