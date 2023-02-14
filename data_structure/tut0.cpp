// <------------------program to add the element at the end of the linked list:--------------->

#include<iostream>
using namespace std;

class Node{   //this is like a blue print for each node have two fields one->data and other->link (or next).
    public:
    int data;
    Node* next;
};

Node* head=NULL;  //created head as a glabal variable so that it can be accessed from anywhere in the program
// initially set it to null i.e  initially list is empty.

// function to insert data at the end of the linkedlist
void insert(int x){
    
    Node* temp = new Node();  //allocate memory block in the heap section of node class type.
    // set value of data and for one block link will be null.
    temp->data= x;  
    temp->next = NULL;
    // for empty list head will point null
if (head ==NULL){

    head = temp;  //this will set the link between head to the newly created block.
    // in order to make more block we have to go out of this if block for that we have two option
    // either we can simply return or we use else statement 
    return;
}


// below code is for only traversal of the list i.e 
    Node* temp1 = head;  
    //creating a temporary variable temp1 to points from 1st to the end of the list.
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;  //this will iterate until we get null in temp.next
    }
    temp1->next = temp;  //set the link b/t one and other block.
}
//function to insert at the beginning of the linkedlist
void insertAtBegin(int data){
   Node* newNode = new Node();
   newNode->data = data;
   newNode->next = head;
   head = newNode;
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
    int n;
    cout<<"Enter the no of element you want to create a linked list: "<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cout<<"Enter the number which you want to add at the end of the linked list: "<<endl;
        cin>>x;
        insert(x);
        print();
        cout<<endl;
    }
    // insert(2);
    // insert(3);
    // insert(5);
    // insert(7);
    // print();
    // cout<<"hello world!"<<endl;
    
    return 0;
}