#include <bits/stdc++.h>
using namespace std;

struct sophuc{
    int thuc, ao;

    sophuc operator+ (sophuc other){
        sophuc res;
        res.thuc = this->thuc + other.thuc;
        res.ao = this->ao + other.ao;
        return res;
    }

    friend bool operator == (sophuc a, sophuc b){
        return a.thuc == b.thuc && a.ao == b.ao;
    }

    friend istream& operator >> (istream& in, sophuc& x){
        in >> x.thuc >> x.ao;
        return in;
    }

    friend ostream& operator << (ostream& out, sophuc x){
        out << x.thuc << " + " << x.ao << "i";
        return out;
    }
};

void in(sophuc a){
    cout << "(" <<a.thuc << " + " << a.ao << "i)"; 
}

int main(){
    sophuc p[100];
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> p[i];
    }

    sophuc e{1, 2};
    int count = 0;
    cout << "PRINT : " << endl;
    for(int i = 0; i < n; ++i){
        if(p[i] == e) count++;
    } 
    cout << count;

}