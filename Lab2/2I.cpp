#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node* prev;
    Node* next;
    string val;
    Node(string _val) : prev(nullptr), next(nullptr), val(_val) {}
};

Node* head = nullptr;
Node* tail = nullptr;

void add_back(string s) {
    Node* new_node = new Node(s);
    if (!head) {
        head = tail = new_node;
    } else {
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }
}

void add_front(string s) {
    Node* new_node = new Node(s);
    if (!head) {
        head = tail = new_node;
    } else {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

bool empty() {
    return head == nullptr;
}

void erase_front() {
    if (!empty()) {
        Node* temp = head;
        head = head->next;
        if (head) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }
}

void erase_back() {
    if (!empty()) {
        Node* temp = tail;
        tail = tail->prev;
        if (tail) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }
        delete temp;
    }
}

string front() {
    if (!empty()) {
        return head->val;
    }
    return "error";
}

string back() {
    if (!empty()) {
        return tail->val;
    }
    return "error";
}

void clear() {
    while (!empty()) {
        erase_front();
    }
}

int main() {
    string s;
    while (cin >> s) {
        if (s == "add_front") {
            string t;
            cin >> t;
            add_front(t);
            cout << "ok" << endl;
        } else if (s == "add_back") {
            string t;
            cin >> t;
            add_back(t);
            cout << "ok" << endl;
        } else if (s == "erase_front") {
            if (empty()) {
                cout << "error" << endl;
            } else {
                cout << front() << endl;
                erase_front();
            }
        } else if (s == "erase_back") {
            if (empty()) {
                cout << "error" << endl;
            } else {
                cout << back() << endl;
                erase_back();
            }
        } else if (s == "front") {
            cout << front() << endl;
        } else if (s == "back") {
            cout << back() << endl;
        } else if (s == "clear") {
            clear();
            cout << "ok" << endl;
        } else if (s == "exit") {
            cout << "goodbye" << endl;
            break;
        }
    }
    return 0;
}

