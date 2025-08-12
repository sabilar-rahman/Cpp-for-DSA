
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

void leafnode(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    vector<int> vLeaf;
    q.push(root);
    while (q.empty() == false)
    {
        Node *p = q.front();
        q.pop();
        if (p->left == NULL && p->right == NULL)
        {
            vLeaf.push_back(p->val);
            continue;
        }
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    sort(vLeaf.rbegin(), vLeaf.rend());
    for (int v : vLeaf)
    {
        cout << v << " ";
    }
}

int main()
{
    Node *root = input_tree();
    leafnode(root);

    return 0;
}