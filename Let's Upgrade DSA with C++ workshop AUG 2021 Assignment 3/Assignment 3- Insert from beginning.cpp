#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node * create(int);
Node * insert_begin(Node *, int);

void display_list(Node *head);


Node *create(int item)   //Creation of Node
{
    Node * nptr = new Node;
    nptr -> data = item;
    nptr -> next = NULL;

    return nptr;
}

int main()
{
    Node * head = NULL;
    head = insert_begin(head, 10);
    head = insert_begin(head, 20);
    head = insert_begin(head, 30);
    head = insert_begin(head, 40);

    display_list(head);

    return 0;
}

Node * insert_begin(Node *head, int data)
{
    Node *np = create(data);
    if(!head)
    {
        head = np;
        return head;
    }
    np -> next = head;
    head = np;
    return head;

}


void display_list(Node *head) //Displaying Linked List
{
    if(!head)
    {
        cout << "List is Empty!!!" << endl;
        return;
    }
    Node *temp = head;
    cout << "Elements in the list when they are inserted from beginning are:- " << endl;
    while(temp != NULL)
    {
        cout << temp -> data<< " ";
        temp = temp -> next;
    }

}

