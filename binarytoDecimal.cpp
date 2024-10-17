#include<iostream>
using namespace std;
 int BinarytoDecimal(int num){
    int ans=0;
    int pow=1;
    while(num>0){
        int lastNum=num%10;
        ans+=pow*lastNum;
        pow*=2;
        num/=10;
    }num--;
    return ans;
 }
int main(){
 int n;
 cin>>n;
 cout<<BinarytoDecimal(n)<<endl;          
return 0;
}