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

void toupper(string &s){
    for(int i = 0 ; i < s.size(); ++i){
        s[i] = toupper(s[i]);
    }
}

int main() {
    fast_io();
    // string s = "Nguyen Tuan Nam";
    // cout << s << endl;
    // cout << s.size() << endl;
    // cout << s.length() << endl;
    // int x; cin >> x;
    // string s; 
    // string t;
    // // cin >> s;
    // cin.ignore(1);
    // getline(cin, s);
    // // dùng getline bị trôi lệnh
    // // khi trước đó sử dụng cin
    // // vậy nên ta sẽ dùng cin.ignore(1) để xóa lệnh enter của câu lệnh cin trước đó
    // getline(cin, t);
    // cout << x << endl;
    // cout << s << endl;
    // cout << t << endl;
    // int n; cin >> n;
    // cin.ignore(1);
    // while(n--){
    //     string s; 
    //     getline(cin, s);
    //     cout << s << endl;
    // }
    // int n; cin >> n;
    // while(n--){
    //     string s;
    //     cin.ignore(1);
    //     getline(cin, s);
    //     int tuoi; cin >> tuoi;
    //     cout << s << " " << tuoi << endl;
    // }
    // string s;
    // getline(cin, s);

    // for(int i = 0 ; i < s.size(); ++i){
    //     cout << s[i] << endl;
    // }
    
    // for(auto it = s.begin(); it != s.end(); ++it){
    //     cout << *it << endl;
    // }

    // cout << s.front() << " " << s.back() << endl;
    
    // isdigit(char c) : kiem tra chu so
    // islower(char c)
    // isupper(char c)
    // isalpha(char c) : kiem tra chu cai
    // int tolower(char c) : tra ve ki tu in thuong cua c
    // int toupper(char c) : tra ve ki tu in hoa cua c

    // int chuso = 0, chucai = 0, dacbiet = 0;
    // for(int i = 0 ; i < s.size(); ++i){
    //     if(isdigit(s[i])) chuso++;
    //     else if(isalpha(s[i])) chucai++;
    //     else dacbiet++;
    // }
    // cout << chuso << " " << chucai << " " << dacbiet << endl;
    // for(char x : s){
    //     cout << (char)toupper(x);
    // }

    // set<string> se;
    // se.insert("zzzz");
    // se.insert("abcd");
    // se.insert("pdpdpd");
    // for(string i : se){
    //     cout << i << endl;
    // }

    // string a = "abc";
    // string b = "zzz";
    // if(a.compare(b) == 1) cout << a << " lon hon " << b << endl ;
    // else if(a.compare(b) == -1)cout << a << " nho hon " << b << endl;
    // else cout << a << " bang " << b << endl;

    // string st = a + b;
    // cout << st << endl;
    // a = "12345";
    // ll num = stoll(a);
    // cout << num + 10 << endl;
    // string t = to_string(num + 10) + " string vua duoc chuyen tu so ne";
    // cout << t << endl;

    // int sum = 0;
    // string s = "24033120931203091093";
    // for(int i = 0 ; i < s.size(); ++i){
    //     sum += s[i] - '0';
    //     cout << s[i] << " " << sum << endl;
    // }
    string s; getline(cin, s);
    stringstream ss(s); // khoi tao stringstream ss co noi dung s
    string word ;
    vector<string> v;
    while(ss >> word){
        v.push_back(word);
    }
    sort(v.begin(), v.end());
    for(string i : v){
        cout << i << endl;
    }
    // tách split
    string s;
    getline(cin, s);
    stringstream ss(s);
    while()
    return 0;
}