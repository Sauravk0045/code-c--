#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int n;
 int sum=0;
 cin>>n;
 int a[n];
 for(int i=0;i<=n-1;i++){
    cin>>a[i];
 }          
 for(int i=0;i<n;i++){
    sum=0;
    for(int j=i;j<n;j++){
        sum+=a[j];
        cout<<sum<<endl;
    }
 }
return 0;
}