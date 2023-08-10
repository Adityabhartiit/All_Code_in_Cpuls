#include <iostream>
using namespace std;
void insertion(int arr[],int n)
{
   for(int i=1;i<n;i++)
    {
        int v=arr[i];
        int j=i-1;
        while(arr[j]>v && j>=0)
        {
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=v;
          cout<<"\n";
          cout<<i<<" "<<"iteration:"<<" ";
        for(int k=0;k<n;k++)
        {   
            cout<<arr[k]<<" ";
        }
      

    }
   
}
int main(){
    int n,i,j;
    int arr[100];
   
    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    cout<<"Given array :"<<endl;

      for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" "; 
    }

    insertion(arr,n);
    
     cout<<endl<<"Sorted array :"<<endl;

      for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" "; 
    }

}

