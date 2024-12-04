#include <iostream>
#include "QueueCpp.h"
using namespace std;
class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    void CreateTree();
    void preorder(Node *p);
    void postorder(Node *p);
    void inorder(Node *p);
    void levelorder(Node *p);
    int Height(Node *root);
};
void Tree::CreateTree()
{
    Node *p, *t;
    int x;
    Queue q(100);
    cout << "Enter the root value" << endl;
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Enter the left child of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        cout << "Enter the right child of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
void Tree::preorder(Node *p)
{

    if (p)
    {
        cout << p->data << " ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void Tree::inorder(Node *p)
{

    if (p)
    {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}
void Tree::postorder(Node *p)
{

    if (p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << " ";
    }
}
void Tree::levelorder(Node *root)
{

    Queue q(100);
    cout << root->data<<" ";
    q.enqueue(root);
    while (!q.isEmpty())
    {
        root = q.dequeue();
        if (root->lchild)
        {
            cout << root->lchild->data << " ";
            q.enqueue(root->lchild);
        }
        if (root->rchild)
        {
            cout << root->rchild->data << " ";
            q.enqueue(root->rchild);
        }
    }
}
int Tree::Height(Node *root)
{
    int x = 0, y = 0;
    if (root == 0)
    {
        return 0;
    }
    x = Height(root->lchild);
    y = Height(root->rchild);
    if (x > y)
    {
        return x + 1;
    }
    else
    {
        return y + 1;
    }
}
int main()
{
    Tree t;
    t.CreateTree();
    cout << "preorder traversal of Tree: " << " ";
    t.preorder(t.root);
    cout << endl;
    cout << "inorder traversal of Tree: " << " ";
    t.inorder(t.root);
    cout << endl;
    cout << "postorder traversal of Tree:" << " ";
    t.postorder(t.root);
    cout << endl;
    cout << "levelorder traversal of Tree:" << " ";

    t.levelorder(t.root);

    return 0;
}