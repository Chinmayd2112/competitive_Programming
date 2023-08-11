#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
int counte( Node* head)
{   int count=0;
    while(head!=0)
    {
        count++;
        head=head->next;
    }
    return count;
}
int main ()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
  
    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
  
   
  
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with
    // the second node
  
  
    // assign data to second node
    second->data = 2;
  
    // Link second node with the third node
    second->next = third;
  
  
  
    third->data = 3; // assign data to third node
    third->next = NULL;
    cout<<counte(head);
  
}