/// buildtreeformlevelorderint main

#include<iostream>
#include<queue>

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

void buildTreeFromLevelOrder(Node *&root){
    cout<<"Enter Data for root :"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    queue<Node*> q;


    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter Left Node data for "<<temp->data<<" : ";
        int ldata;
        cin>>ldata;
        if(ldata!=-1){
        temp->left = new Node(ldata);
        q.push(temp->left);
    }
    cout<<"Enter Right Node data for "<<temp->data<<" : ";
    int rdata;
    cin>>rdata;
    if(rdata!=-1){
        temp->right = new Node(rdata);
        q.push(temp->right);
        }

}
}


int main(){
    
Node* root =NULL;
buildTreeFromLevelOrder(root);


} // n
