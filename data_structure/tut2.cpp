// inserting node at the beginning in c++

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};
Node* head;

void Insert(int x){
    Node* temp = new Node();
    temp->data =x;
    temp->next =NULL;

    if (head !=NULL)

    // Below two lines will be the core logic how to set link b/w newly block to head.
    temp->next = head; //set link between newly created block to the head 
    head =temp;  //here head will point newly created block -> this is we want actually 
    // as head points to newly block this will insert newly block at the beginning.
}
void print(){
    Node* temp=head;
    cout<<"list is: ";
    while (temp != NULL)

    {
        cout<<temp->data;
        temp=temp->next;
    }
}


int main(){
    head = NULL;
    cout<<"how many number you want to add in the linked list?"<<endl;
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter the number"<<endl;
        cin>>x;
        Insert(x);
        print();

    }
    

    
    return 0;
}