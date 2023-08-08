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
      int k;
      cout<<"Enter the number : ";
      cin>>k;
                    for(i=0;i<n;i++){
 for(j=0;j<m;j++)
 {
     cout<<arr[i][j]<<" ";
 }cout<<"\n";
      }



        for(i=0;i<n;i++){
 for(j=0;j<m;j++)
 {
     if(arr[i][k]==k)
     {
        cout<<"found"<<k<<"at"<<i<<j;
     }
 }cout<<"\n";
      }

return 0;

}