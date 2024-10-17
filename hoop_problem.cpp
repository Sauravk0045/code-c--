#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
        int n;
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++){
            for(int j=n;j>=1;j--)
            {
                if(i==j){
                  sum+=i;
                }
               

            }
        }
        cout<<sum;
    
	// your code goes here

}
