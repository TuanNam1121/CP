#include <bits/stdc++.h>
using namespace std;
#define ll long long

//STL: standard template library
//vector, set, map, lower_bound, upper_bound

// sap xep
// tim kiem

sort : nlogn (<= 10^6)
stable_sort
sort vector : sort(a.begin(), a.end())
sort(a.begin() + x, a.begin() + y + 1)
comparator : compare
custom comparator
a đứng trước , b đứng sau 
đúng thứ tự rồi thì trả về true
chưa đúng thì trả vè false


intro sort : quicksort + heapsort : non-stable => sắp xếp sẽ không trả về kết quả như thứ tự đã nhập
stable sort : merge sort => trả về kết quả như đúng thứ tự đã nhập
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second > b.second;
    else return a.first < b.first;
}

int main(){
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    vector<pair<int, int>> vm;
    for(auto it : mp){
        vm.push_back(it);
    }

    sort(vm.begin(),vm.end(), cmp);
    
    for(auto it : vm){
        for(int i = 0 ; i < it.second ; i++) cout << it.first << " ";
    }



    


}
    