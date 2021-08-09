#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node * create(int);
Node * insert_end(Node *, int);

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
    head = insert_end(head, 10);
    head = insert_end(head, 20);
    head = insert_end(head, 30);
    head = insert_end(head, 40);

    display_list(head);

    return 0;
}

Node * insert_end(Node *head, int data)
{
    Node *ptr=create(data);
    Node *temp=head;
    if(head==NULL)
    {
        head=ptr;
        return head;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
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
    cout << "Elements in the list when they are inserted from ending are:- " << endl;
    while(temp != NULL)
    {
        cout << temp -> data<< " ";
        temp = temp -> next;
    }

}

