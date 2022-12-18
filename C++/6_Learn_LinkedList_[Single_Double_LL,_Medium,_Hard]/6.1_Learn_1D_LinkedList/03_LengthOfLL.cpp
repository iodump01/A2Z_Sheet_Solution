// https://bit.ly/3Po7tpf

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        if(head == NULL){
            return 0;
        }
        
        int cnt = 1;
        Node* cur = head;
        
        while(cur->next != NULL){
            cur = cur->next;
            cnt++;
        }
        
        return cnt;
    
    }
};
    



int main() 
{ 
    int n;
    cin>>n;

    int data;
    cin>>data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n-1; ++i)
    {
        cin>>data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    Solution ob;
    cout << ob.getCount(head) << endl;

    return 0;
}

// Input
// 5
// 46 4 2 4 5 
// Output
// 5