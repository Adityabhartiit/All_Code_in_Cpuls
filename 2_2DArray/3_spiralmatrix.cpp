#include <iostream>
using namespace std;
int main(){
      int i,j,n,m;
      cout<<"Enter the numder of row and colume :";
      cin>>n>>m;
      int arr[n][m];
      for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
      }
 int rowstart=0, columestart=0,rowend=n-1,columend=m-1;
 while(rowstart<=rowend && columestart <= columend)
 {
    for(int col=columestart ; col<=columend;col++)
    {
        cout<<arr[rowstart][col]<<" ";
    }
    rowstart++;
    for(int row=rowstart;row<=rowend;row++)
    {
        cout<<arr[row][columend]<<" ";
    }
    columend--;
    for(int col = columend; col>= columestart;col--)
    {
        cout<< arr[rowend][col]<<" ";
    }
    rowend--;
    for(int row =  rowend; row>= rowstart;row--)
    {
        cout<<arr[row][columestart]<<" ";
    }
    columestart++;
 }
 
 
 
 
 
return 0;

}