// <-----------finding maxm and minimum of the BST------------->
// Iterative approach


#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

};


int findMin(Node* root){
    if(root==NULL){
        cout<<"Error list is empty: "<<endl;
        return -1;
    }
    while(root->left !=NULL){
        root=root->left;
    }
    return root->data;
}

//Iterative way to find max in bst.
int FindMax(Node* root){
    if(root==NULL){
        cout<<"Eroor the binary tree is empty: "<<endl;
        return -1;
    }
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
    
}

int main(){
    
    return 0;
}