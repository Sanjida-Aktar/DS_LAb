#include<iostream>
using namespace std;

class Node
{
    public:
    int value;
    Node *next;
    Node(int value)
    {
        this-> value = value;
        next= nullptr;
    }
};

class LinkedList
{
    public:
    Node *head;
    LinkedList(){
        head = nullptr;
    }

    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    void insertAtPosition(int value, int position);
    void deleteNode(int value);
};

int main(){
    LinkedList list;
    list.insertAtBeginning(5);
    list.insertAtEnd(55);
    list.insertAtPosition(15,2);
    list.deleteNode(2);
}
void LinkedList :: insertAtBeginning(int value)
{
    Node *newnode = new Node(value);
    newnode-> next = head;
    head = newnode;
}

void LinkedList :: insertAtEnd(int value)
{
    Node *newnode = new Node (value);

    if(head == nullptr){
        head->next = newnode;
        return;
    }
    Node *temp = head;
    while (head->next!=nullptr)
    {
        temp= temp->next;
    }
    temp->next = newnode;
    
}

void LinkedList :: insertAtPosition(int value, int position){
    if(position==1){
        insertAtBeginning(value);
    }
     Node *newnode = new Node(value);
     Node *temp = head;

     for(int i=1; temp= nullptr && i<position-1 ; i++)
     {
        temp = temp->next;
     }

     if(temp==nullptr)
     {
        cout<< "Positon out of range\n";
        delete newnode;
        return ;

     }
     newnode->next = temp->next;
     temp->next = newnode;
}

void LinkedList :: deleteNode(int value){
    if(head==nullptr){
        
    }
}