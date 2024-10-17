#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
    data=data1;
    next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;

    }
};
Node * printhead(vector<int> &arr){ //indentifying the head
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthofLL(Node* head){ // length of linked list
    int count=0;
     Node* traversal=head;
     while(traversal){
    traversal=traversal->next;
    count++;
 }
 return count;
}
int main(){
 vector<int> arr={12,34,556,77,67};
 Node * head= printhead(arr);
 Node* traversal=head;
 while(traversal){
    cout<<traversal->data<<" ";
    traversal=traversal->next;
 }
cout<<endl;
 cout<<"Length of list:"<<lengthofLL(head);
return 0;
}