#include <bits/stdc++.h>
using namespace std;
#define ll long long


/* SET
- Chỉ lưu các giá trị duy nhất
- Các phần tử trong set lưu theo giá trị tăng dần
- không thể truy cập phần tử bằng index

- insert : O(logn)
- find : O(logn)
- count : O(logn)
*/

int main() {
    set<int> se;
    se.insert(2); // 2
    se.insert(2); // 2
    se.insert(1); // 1 2 
    se.insert(3); // 1 2 3
    se.insert(1); // 1 2 3
    se.insert(5); // 1 2 3 5
    se.insert(7); // 1 2 3 5 7
    cout << se.size() << endl;
    // O(Nlogn)
    // for(int x : se){       // O(N)
    //     cout << x << " ";  // O(logn)
    // }

    for(set<int>::iterator it = se.begin(); it != se.end(); ++it){
        cout << *it << " ";
    }

    cout << endl;

    for(set<int>::reverse_iterator it = se.rbegin(); it != se.rend(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    set<int>::iterator it = se.find(6);

    if(it != se.end()) cout << "FOUND" << endl;
    else cout << "NOT FOUND " << endl;

    int cnt = se.count(7);
    
    if(cnt == 0) cout << "NOT FOUND" << endl;
    else cout << "FOUND" << endl;

    return 0;
}