#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    struct Node* next;
};

Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    temp->next = NULL;
    return temp;
}

void detectAndRemoveLoop(Node* head){
    if (head == NULL || head->next == NULL)
        return;
    Node* fast=head->next;
    Node* slow=head;
    while(fast!=NULL&&fast->next!=NULL&&slow!=NULL){
        if(fast==slow) break;
        fast=fast->next->next;
        slow=slow->next;
    }
    if(fast==slow){
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
    }
}
void printList(Node* head)
{
    while (head != NULL) {
        cout << head->key << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* head = newNode(50);
    head->next = head;
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);

    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;

    detectAndRemoveLoop(head);

    printf("Linked List after removing loop \n");
    printList(head);

    return 0;
}
