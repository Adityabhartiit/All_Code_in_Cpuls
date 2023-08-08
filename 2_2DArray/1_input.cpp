#include <iostream>
using namespace std;
int main(){
      int i,j,n,m,arr[10][10];
      cout<<"Enter the numder of row and colume :";
      cin>>n>>m;
      for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
      }
        for(i=0;i<n;i++){
 for(j=0;j<m;j++)
 {
     cout<<arr[i][j]<<" ";
 }cout<<"\n";
      }




















return 0;

}