#include <iostream>

using namespace std;

// Definition of a singly-linked list node
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(nullptr) {}
};

// Function to insert a node at a specified position in the linked list
ListNode* insertNodeAtPosition(ListNode* head, int data, int position) {
    ListNode* newNode = new ListNode(data);
    
    if (position == 0) {
        // Insert at the beginning (head)
        newNode->next = head;
        return newNode;
    } else {
        ListNode* current = head;
        for (int i = 0; i < position - 1; ++i) {
            current = current->next;
        }
        
        // Insert the new node after 'current'
        newNode->next = current->next;
        current->next = newNode;
        return head;
    }
}

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    // Create the linked list from input
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    
    for (int i = 0; i < n; ++i) {
        int data;
        cin >> data;
        ListNode* newNode = new ListNode(data);
        
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    int data, position;
    cin >> data >> position;
    
    // Insert the new node at the specified position
    head = insertNodeAtPosition(head, data, position);
    
    // Print the modified linked list
    printList(head);
    
    return 0;
}

