#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
           
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count=1;
while(count<n){
    for(int i=0;i<n-count;i++){
        if(arr[i]>arr[i+1]){
            int swap=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=swap;
        }
    }
    count++;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}