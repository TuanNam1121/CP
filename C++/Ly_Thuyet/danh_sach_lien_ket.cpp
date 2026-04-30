#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node{
    int value;
    Node* next;
};

typedef Node* node;

node makeNode(int data){
    node tmp = new Node();
    tmp->value = data;
    tmp->next = nullptr;
    return tmp;
}

int Size(node head){
    int res = 0;
    while(head != nullptr){
        res++;
        head = head->next;
    }
    return res;
}

void addHeadNode(node &head, int data){
    node tmp = new Node();
    tmp->value = data;
    if(head == nullptr) head = tmp;
    else{
        tmp->next = head;
        head = tmp;
    }
}

void addTailNode(node &head, int data){
    node tmp = makeNode(data);
    if(head == nullptr) head = tmp;
    else{
        node p = head;
        while(p->next != nullptr){
            p = p->next;
        }
        p->next = tmp;   
    }
}

void addMidleNode(node &head, int data, int pos){
    int n = Size(head);
    if(pos > n || pos < 1) cout << "Position inserted is invalid" << endl;
    else{
        if(pos == 1) addHeadNode(head, data);
        else if(pos == n + 1) addTailNode(head, data);
        else{
            node tmp = makeNode(data);
            node p = head;
            for(int i = 1; i <= pos - 2; ++i){
                p = p->next;
            }
            tmp->next = p->next;
            p->next = tmp;
        }
    }
}

void traversal(node head){
    while(head != nullptr){
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl; 
}

void rev_traversal(node head){
    stack<int> value;
    while(head != nullptr){
        value.push(head->value);
        head = head->next;
    }
    while(!value.empty()){
        cout << value.top() << " ";
        value.pop();
    }
    cout << endl;
}

void reverse(node head){
    node prev, p, pnext;
}

void deleteHead(node &head){
    if(head == nullptr) return;
    node tmp = head;
    head = head->next;
    delete tmp;
}

void deleteTail(node &head){
    if(head == nullptr) return;
    node prev, p; prev = p = head;
    while(p->next != nullptr){
        prev = p;
        p = p->next;
    }

    if(prev == p) head = nullptr;
    else prev->next = nullptr;
    delete p;
}

void deleteMiddle(node &head, int pos){
    int n = Size(head);
    if(pos < 1 || pos > n + 1) cout << "Position erased is invalid";
    
    if(pos == 1) deleteHead(head);
    else if(pos == n) deleteTail(head);
    else{
        node p = head;
        for(int i = 1; i < pos - 1; ++i){
            p = p->next;
        }
        node tmp = p->next;
        p->next = tmp->next;
        delete tmp;
    }
}

bool search(node head, int val){
    node p = head;
    while(p != nullptr){
        if(p->value == val) return true;
        p = p->next;
    }
    return false;
}

void sort(node &head){
    int n = Size(head);
    node pi = head, pj = head->next;
    for(int i = 1; i <= n - 1; ++i){
        for(int j = i + 1; j <= n; ++j){
            if(pi->value > pj->value) swap(pi->value, pj->value);
            pj = pj->next;
        }
        pi = pi->next;
        pj = pi->next;
    }
}

void swap(int &a, int &b){
    int tmp = a;
    a = b; b = tmp;
}

void daonguoc(node &head){
    node prev = nullptr, p = head, next;
    while(p != nullptr){
        next = p->next;

        p->next = prev;

        prev = p;
        p = next;
    }
    head = prev;
}

int main() {
    int s, n = 5;
    node head = nullptr;
    while(cin >> s && --n){
        addTailNode(head, s);
        traversal(head);
    }
    cout << "duyet linked list : " << endl;
    traversal(head);
    cout << "duyet reverse linked list : " << endl;
    rev_traversal(head);
    cin >> s;
    cout << "Them dau : ";
    addHeadNode(head, s);
    traversal(head);
    cin >> s;
    cout << "Them cuoi : ";    
    addTailNode(head, s);
    traversal(head);
    cin >> s;
    cout << "Them giua : ";
    addMidleNode(head, s, Size(head) - 2);
    traversal(head);
    cout << "Xoa Head : ";
    deleteHead(head);
    traversal(head);
    cout << "Xoa Tail : ";
    deleteTail(head);
    traversal(head);
    cout << "Xoa Middle : ";
    deleteMiddle(head, 2);
    traversal(head);
    cout << "Sap xep : ";
    sort(head);
    traversal(head);
    cout << "Tim kiem node co value = 5 : " << endl;
    traversal(head);
    if(search(head, 5)) cout << "Co tim thay" << endl;
    else cout << "Khong tim thay" << endl; 
    cout << "Dao nguoc linked list : " << endl;
    daonguoc(head);
    traversal(head);
    return 0;
}