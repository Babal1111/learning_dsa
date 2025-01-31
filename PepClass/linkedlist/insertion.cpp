#include<iostream>

using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
}
};
void traversing(Node *&head){
    Node* temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

void insertAtBegining(Node *&head,int x){
    Node *temp = new Node(x);

    temp->next = head;
    head = temp;
}
void insertAtEnd(Node *&head,int x){
    Node *temp = new Node(x);
    Node *curr = head;
    while (curr->next!=NULL)
    {
        curr = curr->next;


    }
    curr->next = temp;
    
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
     insertAtBegining(head , 100);
     cout<<endl;
     traversing(head);
    cout<<endl;
    insertAtEnd(head,1000);
         traversing(head);




    
    
}