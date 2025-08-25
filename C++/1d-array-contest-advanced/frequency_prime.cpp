#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool nt(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void add(vector<pair<int,int>> &prime, int n){
    for(int i = 0 ; i < (int)prime.size() ; i++){
        if(n == prime[i].first){
            prime[i].second++;
            return;
        }
    }
    pair<int,int> a = {n,1};
    prime.push_back(a);
}

int main(){
    vector<int> a;
    int temp;

    while(cin >> temp){
        a.push_back(temp);
    }

    vector<pair<int,int>> prime;

    for(int i : a){
        if(nt(i)){
            add(prime, i);
        }
    }
    
    for(auto i : prime) cout << i.first << " " << i.second << endl;


}