#include<iostream>
using namespace std;

struct node
{
    public:
    int data;
    node *next;
    node(int x){
        data =x;
        next = NULL;
    }
};

int main(){
    node *head = new node(10);
    node *temp = new node(20);
    node *temp1 = new node(30);

    head->next = temp;
    temp->next = temp1;
    
}
