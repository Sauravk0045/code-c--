#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int BinarySearch(int arr[],int n,int search){
    int start=0;
    int end=n;
    
    while(start<=end){
        int mid=(start+end)/2;
     if(arr[mid]==search){
        return mid;
     }
     else if(arr[mid]>search){
        end=mid-1;
     }
     else
     end=mid+1;
    }
    return -1;
 }
int main(){
 int n;
 cin>>n;
 int array[n];
 for(int i=1;i<=n;i++){
    cin>>array[i];
 }
 int element;
 cin>>element;
 
 cout<<BinarySearch(array,n,element)<<endl; 

return 0;
}
