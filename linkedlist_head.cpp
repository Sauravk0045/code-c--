#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){ //construtor
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){       
        data=data1;
        next=nullptr;
    }
};
Node * convertArrtoLL(vector<int> & arr){
    Node* head=new Node(arr[0]); //head points to fist element
    Node* mover=head; // initilly it points to head
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);    
        mover->next=temp;     //it mover forward
        mover=temp; // mover=mover->next
    }
    return head;
}
int main(){
 vector<int> arr={12,5,4,67,64};
 Node* head=convertArrtoLL(arr);
 cout<<head->data;  //print the data of the head
return 0;
}