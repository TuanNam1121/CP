#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector<int> a;
    int temp;
    int mod[] = {0,0};
    while(cin >> temp){
        a.push_back(temp);
        mod[temp % 2]++;
    }
    int higher = (mod[0] > mod[1]) ? 0 : 1;
    if((int)(a.size() % 2) == higher) cout << "YES";
    else cout << "NO";
}