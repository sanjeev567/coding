// <------------Printing the element in Reverse/forward order in the linked list using recursion------------------>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

};
void print(Node* p){
    if (p==NULL)  // Exit condition;
    return;
    print(p->next);  // recursive call
    cout<<p->data;  //after stop of recursive call this line is get executed to that no times from last node to the main 
    //as recursion stop the control will be at last node then it go step by step printin all the node in the reverse order 
    //until it did not reach to the main fn... 
        
    
 }
Node* Insert(Node* head, int x){
    Node* temp = new Node();
    temp->data= x;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
    }
    else{
        Node* temp1=head;
        while(temp1->next != NULL)
        temp1= temp1->next;
        temp1->next=temp;
    }
    return head;
}

int main(){
    Node* head= NULL; //local variable head;
    // head = Insert(head, 2);
    // head = Insert(head, 3);
    // head = Insert(head, 4);
    // head = Insert(head, 5);
    // head = Insert(head, 6);
    //print(head);

    int n;
    cout<<"Enter the no to create that no of node in the linked list: "<<endl;
    cin>>n;
    for (int i=0; i<n; i++){
        int x;
        cout<<"the the data to store  in the linked list: "<<endl;
        cin>>x;
        head=Insert(head, x);
    }
    print(head);
    
    return 0;
}