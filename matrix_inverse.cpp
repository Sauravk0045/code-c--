#include<bits/stdc++.h>
using namespace std;
// make rows into column
void tranverse(int a[3][3]){             
for (int i = 0; i < 3; i++){
        for (int j = i; j < 3; j++){
            swap(a[i][j], a[j][i]);
        }
 }
}
// inverse the rows
void columsInverse(int a[3][3]){
 for (int i = 0; i < 3; i++){
        for (int j = 0, k = 3 - 1; j < k; j++, k--){
            swap(a[j][i], a[k][i]);
      
        }
 }
}
int main(){
 int a[3][3];
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
 }
//  for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<a[i][j]<<endl;
//     }
//  }
 
tranverse(a);
columsInverse(a);


 for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<a[i][j]<<endl;
           
        }
 }
return 0;
}