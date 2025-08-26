#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mark[(int)1e6+1] = {0};

/*
Công thức tính tổ hợp chập 2 của k là k * (k - 1) / 2 
                           3 của k là k  * (k - 1) * ( k - 2) / 6
*/

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mark[a[i]]++;
    }
    int count = 0;
    for(int i : mark){
        count += 1ll* i * (i - 1) / 2;
    }

    cout << count;

}