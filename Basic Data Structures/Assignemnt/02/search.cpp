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
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }
int search_on_idx(Node *head, int val)
{
    int indexNum = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == val)
        {
            return indexNum;
        }
        tmp = tmp->next;
        indexNum++;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;

        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }

            Node *newnode = new Node(val);
            if (head == NULL)
            {
                head = newnode;
                tail = newnode;
                continue;
            }

            tail->next = newnode;
            tail = newnode;
        }

        int value;
        cin >> value;

        search_on_idx(head, value);
        // print_linked_list(head);
        cout << search_on_idx(head, value) << endl;
    }
    return 0;
}