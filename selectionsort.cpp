#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
 cin>>n;
 int array[n];
 for(int i=1;i<=n;i++){
    cin>>array[i];
 }
 
 for(int i=1;i<=n-1;i++){
    for(int j=i+1;j<=n;j++){
        if(array[j]<array[i]){
            int swap=array[j];
            array[j]=array[i];
            array[i]=swap;
        }
    }
 }
 for(int i=1;i<=n;i++){
 cout<<array[i];      }    
 cout<<endl;
return 0;
}