// <---------------------Introduction to linked list-------------->
// Inserting a node at the begining of the linked list.
#include<stdlib.h>
#include<stdio.h>


// here i created Node which have two fields one->data and the other will be link(Or address of next node or block);
struct Node
{
    int data;
    struct Node* next; 
};

// since head should not get modified therefore i created it as global variable. which will points node
struct Node* head;  //global variable
void Insert(int x){
    // creating a dynamic temporary variable named temp to traverse the list.
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;  //this line is same as this -> *temp.data =x;
    temp->next = NULL;  //remember here we dereference temp variable and in temp.next we assign null initially. when we require we can change its value
    if (head != NULL)  //temp variable will also have have one block space which points either data or link.

    
    temp->next = head;  //this will take care of if list is empty as well as jumping to next element of the list.
    // if head will be null then it will be empty list if head is not null it will points the temp variable to iterate or traverse.
    head = temp;  //finally return to head that will be null.
}
void print(){
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp= temp->next;  //this will also for iterating or traversing the list until we get null.
    }
    
}



int main(){
    head = NULL;  //empty list
    printf("How many number of linked list you want to create?\n");
    int n, i, x;
    scanf("%d",&n);
    for (i = 0; i<n; i++){  //here we iterating each node whatever the no of element we require to insert and print.
        printf("\nEnter the number \n");
        scanf("%d",&x);
        Insert(x);
        print();
    }

}