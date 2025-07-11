#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_any_position(Node *&head, int indx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < indx; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

int size_linked_list(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// void delete_at_index(Node *&head, Node *&tail ,int idx)
// {
//     Node *temp = head;
//     for (int i = 0; i < idx ; i++)
//     {
//         temp = temp->next;
//     }
//     Node *deleteNode = temp->next;
//     temp->next = temp->next->next;
   
//     delete deleteNode;
//     tail = temp;
    
// }

void delete_at_index(Node* &head, Node* &tail, int idex)
{
  //  if (head == NULL) return; 

    if (idex == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL) tail = NULL; 
        return;
    }

    Node* temp = head;
    for (int i = 0; i < idex - 1; i++) {

        
        if (temp == NULL || temp->next == NULL) return; 
        temp = temp->next;
    }

    if (temp->next == NULL) return; 

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;

    if (temp->next == NULL) tail = temp; 

    delete deleteNode;
}


void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
            insert_at_head(head, tail, v);
        else if (x == 1)
            insert_at_tail(head, tail, v);
        else if (x == 2)
            delete_at_index(head, tail, v);
        print_linked_list(head);
    }

    return 0;
}