
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void levelNode(Node *root, int levelValue)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
    }
    queue<Node *> q;
    q.push(root);
    int present = 0;
    while (q.empty() == false)
    {
        int n = q.size();
        if (present == levelValue)
        {
            for (int i = 0; i < n; i++)
            {
                Node *p = q.front();
                q.pop();
                cout << p->val << " ";
            }
            return;
        }
        for (int i = 0; i < n; i++)
        {
            Node *p = q.front();
            q.pop();
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }
        present++;
    }
    cout << "Invalid" << endl;
}
int main()
{
    int levelValue;
    Node *root = input_tree();
    cin >> levelValue;
    levelNode(root, levelValue);
    return 0;
}