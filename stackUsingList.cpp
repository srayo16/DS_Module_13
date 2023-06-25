#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        if (v.size() == 0)
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