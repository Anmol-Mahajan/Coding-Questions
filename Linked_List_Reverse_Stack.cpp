#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node* next;
};
Node* insertAthead(Node* head,int newData){
    Node* temp=new Node;
    temp->data=newData;
    temp->next=head;
    head=temp;
    return head;
}
Node* reverseList(Node* head){
    stack<Node*>s;
    Node* ptr=head;
    while(ptr->next!=NULL){
        s.push(ptr);
        ptr=ptr->next;
    }
    head=ptr;
    while(!s.empty()){
        ptr->next=s.top();
        ptr=ptr->next;
        s.pop();
    }
    ptr->next=NULL;
    return head;
}
void printList(Node* head){
while(head){
    cout<<head->data<<" ";
    head=head->next;
}
}

int main(){
    Node* head=NULL;
    head=insertAthead(head, 1);//Insertion at head
    head=insertAthead(head, 2);
    head=insertAthead(head, 1);
    head=insertAthead(head, 42);
    head=insertAthead(head, 122);

    head = reverseList(head);

    printList(head);

}
