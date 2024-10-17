#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int DecimalToOctal(int num){
    int ans=0;
    int power=1;
    while(power<=num){
            power*=8;}
    power/=8;
  while(power>0){
    int lastDigit=num/power;
    num-=power*lastDigit;
    power/=8;
    ans=ans*10+lastDigit;
  }
  return ans;

 }
int main(){
 int n;
 cin>>n;
 cout<<DecimalToOctal(n)<<endl;          
return 0;
}