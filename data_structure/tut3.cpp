//<-----------program to delete a node of nth position------------->
//in this fn we have to mainly focus on delete fn implementation.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head=NULL; //empty list...

void insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next =NULL;

    if (head ==NULL){
        head = temp;
        return;
    }
    Node* temp1=head;
    while (temp1->next != NULL)
    {
        temp1=temp1->next;
    }
    temp1->next = temp;

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
        return;
    }
    
    for(int i=0; i<n-2; i++){
        temp1 =temp1->next;  //temp1 now points to (n-1)th node

    }
    Node* temp2 = temp1->next;  //temp2 is now points to nth node
    temp1->next = temp2->next;  //temp1->next will point now (n+1)th node...
    delete temp2;  //free the space of that block;
    
    
}
int main()
{
    insert(2);
    insert(3);
    insert(6);
    insert(5);
    insert(9);
    print();
    Delete(3);
    cout<<endl;
    print();

    return 0;
}