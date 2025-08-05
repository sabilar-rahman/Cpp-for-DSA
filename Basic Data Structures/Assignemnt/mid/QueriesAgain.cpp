// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void insert_at_head(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;
// }

// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }

// void insert_at_any(Node *head, int index, int val)
// {
//     Node *newnode = new Node(val);
//     Node *temp = head;
//     for (int i = 1; i < index; i++)
//     {
//         temp = temp->next;
//     }
//     newnode->next = temp->next;
//     temp->next->prev = newnode;
//     temp->next = newnode;
//     newnode->prev = temp;
// }

// void printForward(Node *head)
// {
//     cout << "L ->";

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void printBackward(Node *tail)
// {
//     cout << "R->";
//     Node *temp = tail;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->prev;
//     }
//     cout << endl;
// }

// int size(Node *head)
// {
//     Node *tmp = head;
//     int cnt = 0;
//     while (tmp != NULL)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     int val;
//     cin >> val;
//     while (val--)
//     {
//         int index, value;
//         cin >> index >> value;

//         if (index == 0)
//         {
//             insert_at_head(head, tail, value);
//         }
//         else if (index == size(head))
//         {
//             insert_at_tail(head, tail, value);
//         }
//         else if (index > size(head))
//         {
//             cout << "Invalid" << endl;
//             continue;
//         }
//         else
//         {
//             insert_at_any(head, index, value);
//         }
//     }
//     printForward(head);
//     printBackward(tail);
//     return 0;
// }

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
    head->prev = newNode;
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
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void printForward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int size(Node *head)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int index, value;
        cin >> index >> value;

        int len = size(head);

        if (index < 0 || index > len)
        {
            cout << "Invalid" << endl;
        }
        else if (index == 0)
        {
            insert_at_head(head, tail, value);
            printForward(head);
            printBackward(tail);
        }
        else if (index == len)
        {
            insert_at_tail(head, tail, value);
            printForward(head);
            printBackward(tail);
        }
        else
        {
            insert_at_any(head, index, value);
            printForward(head);
            printBackward(tail);
        }
    }

    return 0;
}
