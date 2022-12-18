// https://bit.ly/3A2pKTh

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

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 


class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* temp = new Node(x);
       temp->next = head;
    //   printList(temp);
       return temp;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* temp = new Node(x);
       
       if(head == NULL){
           return temp;
       }
       
       Node* cur = head;
       while(cur->next != NULL){
           cur = cur->next;
       }
       cur->next = temp;
       
       return head;
    }
};


int main() 
{ 

    int n;
    cin>>n;
    struct Node *head = NULL;
    for (int i = 0; i < n; ++i)
    {
        int data, indicator;
        cin>>data;
        cin>>indicator;
        Solution obj;
        if(indicator)
            head = obj.insertAtEnd(head, data); 
        else
            head = obj.insertAtBegining(head, data);
    }
    printList(head); 
    return 0; 
} 


// Input
// 5
// 9 0 5 1 6 1 2 0 5 0
// Output
// 5 2 9 5 6