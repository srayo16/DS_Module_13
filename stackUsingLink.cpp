#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);

        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {

            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        // tail->prev->next = NULL;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool isEmpty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    MyStack st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }

    while (!st.isEmpty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}