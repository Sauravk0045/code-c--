#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int HexaToDecimal(string a){
    int ans=0;
    int power=1;
    int s=a.size();
    for(int i=s-1;i>=0;i--){
        if(a[i]>='0'&&a[i]<='9'){
        ans+=power*(a[i]-'0');
        }
        else if(a[i]>='A'&& a[i]<='F'){
        ans+=power*(a[i]-'A'+10);}
    power*=16;
    }
    return ans;

 }
int main(){
 string s;
 cin>>s;
 cout<<HexaToDecimal(s)<<endl;          
return 0;
}