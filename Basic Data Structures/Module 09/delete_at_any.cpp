#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_at_head(Node *&head, Node *&tail)
{
    Node *temp = head;
    head = head->next;
    // if there was one node
    if (head == NULL)
    {
        tail = NULL;
        delete temp;
        return;
    }
    head->prev = NULL;
    delete temp;
}


 void delete_at_any(Node* &head, Node* &tail, int pos)
 {
     Node* temp = head;
     for(int i=1; i<pos; i++)
     {
         temp = temp->next;
     }
     Node* nextNode = temp->next;
     temp->next = temp->next->next;
     temp->next->prev = temp;
     
    
     delete nextNode;
 }
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_at_any(head, tail, 2);
    print_forward(head);

    return 0;
}