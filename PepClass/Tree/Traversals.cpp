#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int key){
        data = key;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);
        // inorder(root);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(Node* root){
    // cout<<"\n preorder: ";
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
}
}
void postorder(Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    Node* root = new Node(10);
    Node *n1 = new Node(20);

    Node *n2 = new Node(30);
    root->left = n1;
    root->right = n2;

    inorder(root);
    cout<<"\n preorder: ";

    preorder(root);
    cout<<"\n postorder: ";
    postorder(root);
}

