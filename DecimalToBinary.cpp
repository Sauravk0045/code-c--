#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int DecimalToBinary(int num){
    int ans=0;
    int power=1;
    while(power<=num){
            power*=2;}
    power/=2;
  while(power>0){
    int lastDigit=num/power;
    num-=power*lastDigit;
    power/=2;
    ans=ans*10+lastDigit;
  }
  return ans;

 }
int main(){
 int n;
 cin>>n;
 cout<<DecimalToBinary(n)<<endl;          
return 0;
}