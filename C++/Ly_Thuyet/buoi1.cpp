#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // pair : cấu trúc lưu đc 2 thằng đi kèm với nhau
    // pair<kiểu dữ liệu 1, kiểu dữ liệu 2>
    // pair<int,int> a = make_pair(100,200); gan makepair
    // a = {100,200}; gan truc tiep 
    // pair<int, int> b = a ; gan b = a và phải cùng 2 kiểu
    
    // cout << a.first << "  " << a.second << endl; nhập pair
    // cin >> a.first;
    // cin >> a.second;
    // cout << a.first << " " << a.second << endl;
    
    // mảng pair 
    // pair<int, int> arr[100];
    
    // lưu hoành độ vào tung độ
    // int n ; cin >> n;
    
    // for(int i = 0 ; i < n ; i++){
    //     cin >> arr[i].first >> arr[i].second;
    // }

    // for(int i = 0 ; i < n ; i++){
    //     cout << arr[i].first << " " << arr[i].second << endl;
    // }
    
    // pair<int,pair<int,int>> a;
    // cout << a.first << endl;
    // cout << a.second.first << " " << a.second.second << endl; // a.second la 1 pair


    // vector : 1 mảng động có thể thu hẹp và mở rộng tùy ý.tốc độ nhanh như mảng
    // vector<int> a;
    // vector<int> v(10); // tạo sẵn cho mảng có 10 phần tử 
    // a.push_back(50); // -> đẩy 1 giá trị vào vector
    // a.push_back(100);
    // cout << a.size() << endl; // -> xem có bao nhiêu phần tử
    // a.push_back(200);
    // cout << a.size() << endl;

    // for(int i = 0 ; i < (int)a.size(); i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for(int i = a.size() - 1 ; i >= 0; i--){
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // // iterator
    // cout << *a.begin() << endl; // -> trỏ đến thằng đầu tiên
    // cout << *a.end() << endl; // -> trỏ đến null đánh dấu hết vector

    // for(vector<int>::iterator it = a.begin(); it != a.end(); ++it){
    //     cout << *it << " " ;
    // }

    // // thay thế iterator = auto cho dễ cài đặt

    // for(auto it = a.begin(); it != a.end(); ++it){
    //     cout << *it << " " ;
    // }
    // cout << endl;
    // // it + x sẽ tương đương với a[x] trong mảng
    // cout << *(a.begin() + 2);

    int n;cin >>n;
    vector<int> mang(n,100); // tạo 1 mảng có n phần tử và toàn bộ phần tử là 100

    // memset : memset(mảng cần gán, số gần gán (tuy nhiên memset chỉ gán đc 3 giá trị là -1 , 0 , 1), số lượng phần tử cần gán)
    int mem[100];
    memset(mem, -1, sizeof(mem));
    for(int i : mem) cout << i << " " ;
}