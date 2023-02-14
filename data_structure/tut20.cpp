// find min and max in bst using recurssive approach

#include<iostream>
using namespace std;

struct BSTNOde{
    int data;
    BSTNOde* left;
    BSTNOde* right;
};

int findMin(BSTNOde* root){
    if(root==NULL){
        cout<<"Eroor tree is empty: "<<endl;
        return -1;
    }
    else if(root->left ==NULL){
        return root->data;
    }
    return findMin(root->left);
}
int findMax(BSTNOde* root){
    if(root==NULL){
        cout<<"Eroor tree is empty: "<<endl;
        return -1;
    }
    else if(root->right ==NULL){
        return root->data;
    }
    return findMax(root->right);
}
int main(){
    BSTNOde* root;
    // first we have to insert element to check this code we can copy insert fn from previous file.



    return 0;
}
