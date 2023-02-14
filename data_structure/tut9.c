// <----------Introduction to stack -------------->
#include<stdio.h>
#define maxsize 101  //way to define any parameter

//both below is made global to access anywhere
int A[maxsize];
int top = -1;

//to push any value in the stack
void push(int x){
    if (top== maxsize -1){
        printf("Error! 'stack overflow'\n");  //condition for overflow:
        return;
    }
    top++;
    A[top]=x;

}
//to delete the element 
void pop(){
    if(top==-1){
        printf("Error! the stack is empty: \n");
        return;
    }
    top--;
}
int Top(){
    return A[top];
}
int Isempty(){
    if(top==-1)
    return 1; //true
    return 0; //false
}

void print(){
    int i;
    printf("stack: ");
    for (i=0; i<=top; i++){
        printf("%d",A[i]);
    }
        printf("\n");
}

int main(){
    push(2); print();
    push(3); print();
    push(5); print();
    push(8); print();
    pop(); print();
    int x= Isempty();
    if (x==1){
        printf("the stack is not empty: \n");
    }
    else
    printf("stack is empty: ");

}
