#include<iostream>
using namespace std;

class Node  
{
    public:
    int data;
    Node *next;
    Node( int value){
        this-> data = value;
        next = nullptr;
    }
};

class LinkedList

{
 public:
 Node *head;
 LinkedList()
 {
    head = nullptr;
 }

 void inseartatFirst(int value)
 {
    Node *newNode = new Node(value);
    newNode -> next = head;
    head = newNode;
 }

 void inseartAtEnd(int value)
 {
    Node *newNode = new Node(value);
    if(head = nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != nullptr){
        temp = temp-> next;
        temp->next = newNode;
        
    }
 }
};
