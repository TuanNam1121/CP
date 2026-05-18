#include <bits/stdc++.h>
using namespace std;
#define ll long long

/* Iterator 
- Con trỏ kiểu template
3    5    6     7      8
begin                     end
- end sẽ trả ô nhớ sau phần tử cuối cùng
- begin + x  tương tương với giá trị index trong mảng
- ++ -- += -=

      3    5    6     7      8
rend                       rbegin
- rend sẽ trả về ô nhớ trước phần tử đầu tiên mảng 

push_back : O(1)
size : O(1)
insert : O(n)      insert(position by iterator, value)
erase : O(n)
pop_back : O(1)

vector<int>::iterator it        begin() end()
vector<int>::reverse_iteratro   rebegin() rend()


*/



int main() {
    vector<int> v = {2, 3, 5, 7, 5, 10};
    
    vector<int>::iterator i = v.begin() + 3;
    cout << *i << endl;
    i += 2; // iter nhảy 2 ô
    cout << *i << endl;

    vector<int>::iterator itt;
    for(itt = v.begin(); itt != v.end(); ++itt){
        cout << *itt << " ";
    }
    cout << endl;

    //vector<int>::reverse_iterator it = v.rbegin();
    auto it = v.rbegin();
    cout << *it << " ";
    ++it;
    cout << *it << " ";

    v.insert(v.begin() + 2, 50);
    for(int i : v) cout << i << " ";
    return 0;
}