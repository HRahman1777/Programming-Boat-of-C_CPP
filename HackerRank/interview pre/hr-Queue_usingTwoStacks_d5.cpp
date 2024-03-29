#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    stack<int> s1, s2;

    void enQueue(int x)
    {
        if (s1.empty() && s2.empty())
        {
            s1.push(x);
        }
        else
        {
            s2.push(x);
        }
    }

    void deQueue()
    {
        if (s1.empty())
        {
            while (!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        s1.pop();
    }

    void frontEle()
    {
        if (s1.empty())
        {
            while (!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        cout << s1.top() << "\n";
    }

} Queue;

int main()
{
    Queue q;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int ch, x;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cin >> x;
            q.enQueue(x);
            break;

        case 2:
            q.deQueue();
            break;

        case 3:
            q.frontEle();
            break;

        default:
            break;
        }
    }

    return 0;
}