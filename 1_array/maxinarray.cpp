#include <iostream>
using namespace std;
int checkdup(int arr[],int n)
{
     int counter =0,max=0;
     for(int i=0;i<n;i++)
    { 
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                counter++;
            }
        }
        if(counter>max)
        {
            max=counter;
        }
    }
    return max;
   
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
 int checkdup(arr[], n); 
    

}

