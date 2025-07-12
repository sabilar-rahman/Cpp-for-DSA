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

// void print_linked_list(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

bool equal(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return (head1 == NULL && head2 == NULL);
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Node *newnode = new Node(val);
        if (head1 == NULL)
        {
            head1 = newnode;
            tail1 = newnode;
            continue;
        }

        tail1->next = newnode;
        tail1 = newnode;
    }
    // second linked list
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        Node *newnode = new Node(val);
        if (head2 == NULL)
        {
            head2 = newnode;
            tail2 = newnode;
            continue;
        }
        else
        {
            tail2->next = newnode;
            tail2 = newnode;
        }
    }
    // if (equal(head1, head2))
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    // optional chaining

    (equal(head1, head2)) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}