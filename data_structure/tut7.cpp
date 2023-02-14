// <------------reversing the linked list using recursion--------------->

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;

void reverse(Node* p){
    if(p->next ==NULL){  //exit condition
        head = p;
        return;
    }
    reverse(p->next);

    // below third line will set the link between last node and the second last node.
    Node* q = p->next;
    q->next=p;
    p->next =NULL;
}

int main(){
    
    return 0;
}