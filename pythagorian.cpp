#include<iostream>
using namespace std;
bool check(int x,int y,int z){
int maxN=max(x,max(y,z));
int num2,num3;
if(maxN==x)
{
    num2=y;
    num3=z;
}
else if(maxN==y)
{
    num2=x;
    num3=z;
}
else
{
num2=x;
num3=y;
}
if(maxN*maxN==num2*num2+num3*num3)
{
return true;
}
else
return false;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"Pythagorian Triplets"<<endl;
    }
    else
    {
        cout<<"Not Pythagorian Triplets"<<endl;
    }
return 0;
}