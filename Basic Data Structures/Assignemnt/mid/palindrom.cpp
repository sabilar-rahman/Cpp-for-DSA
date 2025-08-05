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

bool palindrome(Node *head)
{

    Node *startPoint = head;
    Node *endPoint = head;
    while (endPoint->next != NULL)
    {
        endPoint = endPoint->next;
    }
    while (startPoint != NULL)
    {
        if (startPoint->val != endPoint->val)
        {
            return false;
        }
        startPoint = startPoint->next;
        endPoint = endPoint->prev;
    }
    return true;
}

// void printForward(Node *head)
// {

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endPointl;
// }

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // if (palindrome(head))
    // {
    //     cout << "YES" << endPointl;
    // }
    // else
    // {
    //     cout << "NO" << endPointl;
    // }

    (palindrome(head)) ? cout << "YES" << endPointl : cout << "NO" << endPointl;

    return 0;
}