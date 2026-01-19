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

// -- bai toan nhi phan co do dai n
// -- bai toan sinh to hop chap k cua n ptu
// -- sinh hoan vi
// -- sinh phan hoach

// khởi tạo cấu hình đầu tiên
// while(đến khi chưa phải cấu hình cuối cùng){
//  xử lý cấu hình hiện tại
//  sinh ra cấu hình kế tiếp
//}
int n, binary[100];
bool check = 1;

void ktao(){
    for(int i = 0; i < n; ++i){
        binary[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        binary[i] = 0;
        --i;
    }
    if(i == 0) check = 0;
    else binary[i] = 1;
}

int main() {
    fast_io();
    cin >> n;
    ktao();
    while(check){
        for(int i = 1; i <= n; ++i){
            cout << binary[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}