#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int OctalToDecimal(int num){
    int ans=0;
    int power=1;
    while(num>0){
        int lastNum=num%10;
        ans+=power*lastNum;
        power*=8;
        num/=10;
    }num--;
    return ans;
 }
int main(){
int n;
cin>>n;
cout<<OctalToDecimal(n);        
return 0;
}