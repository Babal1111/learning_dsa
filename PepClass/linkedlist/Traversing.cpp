#include<iostream>

using namespace std;
int couu=0;
struct Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
}
};
void traversing(Node *head){
    Node* temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void traversingUsingRecursion(Node *head){
    Node *temp = head;
    // can use heAD THISTIME DIRECTLY ALSO  

    if(temp==NULL){
        return;
    }
    cout<<temp->data<<" ";
    traversingUsingRecursion(temp->next);


}

void search(Node *head,int x){
    Node *temp = head;
    int count=0;
    while (temp!=NULL){
        count++;
        if(temp->data == x){
            cout<<"Element is found at "<<count<<endl;
            break;
        }
        temp=temp->next;
    }
}

void searchRecursion(Node *head,int x){
    couu++; //global 
    if(head->next==NULL){
        // cout<<"\n not found ";
        return;
    }
    if(head->data == x){
        cout<<"Element is found at "<<couu<<endl;
    }
    searchRecursion(head->next,x);
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    head->next=second;
    second->next=third;
    third->next=fourth;
    traversing(head);
    cout<<"Traversal using REcursion : \n";
    traversingUsingRecursion(head);
    cout<<"searching 30 \n";
    search(head,30);
     cout<<"searching 40 using recursion \n";
    searchRecursion(head,30);

}