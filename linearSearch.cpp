#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int linearSearch(int arr[],int a,int key){
    for(int i=0;i<a;i++){
        if(arr[i]==key)
        return i;
    }
    return -1;
 }
int main(){
 int n,key;
 cin>>n>>key;
 int array[n];
 for(int i=0;i<n;i++)
 cin>>array[i];
cout<<linearSearch(array,n,key)<<endl;          
return 0;
}