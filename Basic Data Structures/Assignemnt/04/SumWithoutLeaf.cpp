// You will be given a binary tree as input in level order. You need to output the sum of all node's values in that tree except the leaf nodes.

// For example:

// image

// The output for the above tree will be: 60

// Input Format

// Input will contain the binary tree in level order.  means there is no node available.
// Constraints

//  Maximum number of nodes
//  Node's value
// Output Format

// Output the total sum of that tree except the leaf nodes.
// Sample Input 0

// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// Sample Output 0

// 60

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

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1.  ber kore ana
        Node *f = q.front();
        q.pop();

        // 2.  oi node ke niye kaj
        cout << f->val << " ";

        // 3.  children push kora
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

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
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node ke niye kaj
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

        // 3. children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int sumNode(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int leftSide = sumNode(root->left);
    int rightSide = sumNode(root->right);
    return root->val + leftSide + rightSide;
}

int main()
{
    Node *root = input_tree();

    cout << sumNode(root);

    return 0;
}