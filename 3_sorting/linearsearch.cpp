#include <iostream>
using namespace std;
int search(int arr[],int n,int j)
{
    for(int i=0;i<n;i++)
    {
        if(j==arr[i])
        return i;
    
    }
}
int main()
{
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
    cout<<endl<<"Enter the number :";
    cin>>j;
int result = search(arr,n,j);
result=result+1;
cout<<result<<endl;


}

