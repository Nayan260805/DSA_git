#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next;
    }
};

int main()
{
    vector<int> arr = {2, 3, 4, 5};
    Node* y = new Node(arr[0], nullptr);
    cout << y.next;
}