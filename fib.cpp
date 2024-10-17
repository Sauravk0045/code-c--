#include<iostream>
using namespace std;
void fico(int num){
int first=0;
int second=1;
int next;
for(int i=1;i<=num;i++)
{
cout<<first<<endl;
next=first+second;
first=second;
second=next;
}
}
int main(){

int n;
cin>>n;
fico(n);
return 0;
}