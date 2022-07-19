#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
    int val;
    Node * next;
    Node(int x)
    {
           val = x;
           next = NULL;
    }
};
Node * insertBegin(Node * head,int val)
{
    Node *temp  = new Node(val);
    temp->next = head;
    return temp;
}
void print(Node * head)
{
   Node * cur = head;
   while(cur != NULL)
   {
       cout<<cur->val<<"->";
       cur = cur->next;
   }
   cout<<endl;
}
int main() {
   Node * head = NULL;
   head = insertBegin(head,5);
   head = insertBegin(head,4);
   print(head);
}
