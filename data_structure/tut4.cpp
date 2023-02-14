// <------------------program to add the element at the end of the linked list:--------------->
// a dynamic program where ask user to input how much element he want to add 
// or delete a nth position node.

#include<iostream>
using namespace std;

class Node{   //this is like a blue print for each node have two fields one->data and other->link (or next).
    public:
    int data;
    Node* next;
};

Node* head=NULL;  //created head as a glabal variable so that it can be accessed from anywhere in the program
// initially set it to null i.e  initially list is empty.

void insert(int x){
    
    Node* temp = new Node();  //allocate memory block in the heap section of node class type.
    // set value of data and for one block link will be null.
    temp->data= x;  // 
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

void print(){
    Node* temp=head;
    cout<<"list is: ";
    while (temp != NULL)

    {
        cout<<temp->data;
        temp=temp->next;
    }
}
void Delete(int n)  //this will delete the nth position element..
{
    Node* temp1 =head;
    if(n==1){
        head = temp1->next;
        delete temp1;
        return;  //here return is work as once if block is get executed then no need to execute 
        //below line of code. either we use return or we can use else so that both block of code not 
        // get executed at once.
        delete temp1;
    }
    
    for(int i=0; i<n-2; i++){
        temp1 =temp1->next;  //temp1 now points to (n-1)th node

    }
    Node* temp2 = temp1->next;  //temp2 is now points to nth node
    temp1->next = temp2->next;  //temp1->next will point now (n+1)th node...
    delete temp2;  //free the space of that block;

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
    Delete(2);
    print();
  
    
    return 0;
}