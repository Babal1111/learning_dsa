#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int key){
        this->data = key;
        left = NULL;
        right = NULL;
    }
};



int main(){
    Node* root = new Node(10);
    Node *n1 = new Node(20);

    Node *n2 = new Node(30);
    root->left = n1;
    root->right = n2;
}

