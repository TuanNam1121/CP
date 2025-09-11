#include <bits/stdc++.h>
using namespace std;
#define ll long long

void merge_sort(int b[], int c[], int n, int m){
    vector<int> a(n + m);
    int i, j; i = j = 0;
    
    while(i != n && j != m){
        if(b[i] <= c[j]){
            cout << "b" << i + 1 << " ";
            a.push_back(b[i]);
            i++;
        }
        else{
            cout << "c" << j + 1 << " ";
            a.push_back(c[j]);
            j++;
        }
    }
    while(i != n){
        cout << "b" << i + 1 << " ";
        a.push_back(b[i]);
        i++;
    }

    while(j != m){
        cout << "c" << j + 1<< " ";
        a.push_back(c[j]);
        j++;
    }
}

int main(){
    int n, m; cin >> n >> m;
    int b[n], c[m];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < m; i++) cin >> c[i];
    merge_sort(b, c, n, m);
}