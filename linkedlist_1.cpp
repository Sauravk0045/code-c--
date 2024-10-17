#include<bits/stdc++.h>
using namespace std;
struct Node{      //for self defined objects (note:we can also use "class" instend of "structure")
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){ // construtor for initilize the object (objects are:data,next)
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

int main(){
 vector<int> arr={2,5,6,8};
 Node *y=new Node(arr[0],nullptr);//for memory location
 Node x=Node(arr[0],nullptr);// for data implementation without new keyword
 cout<<y<<endl;
 cout<<y->data<<endl;//Print data using  Class Member Access Operator
 cout<<x.data;// Print data without using  Class Member Access Operator

}