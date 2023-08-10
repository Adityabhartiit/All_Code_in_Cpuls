
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
	  
	for (int i = 0; i < n - 1; i++)
 
		for (int j = 0; j < n - i - 1; j++)
		{	if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
                   cout<<"\n";
         cout<<i+1<<" "<<"iteration:"<<" ";
         
         
        for(int k=0;k<n;k++)
        {  
            cout<<arr[k]<<" ";
        }
        }
        
}


int main(){
    int n;
    cout<<"enter the number of element in the array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i] ;
    }
    
    cout<<endl<<"Given Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }

    bubbleSort(arr,n);

    cout<<endl<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }
    

return 0;

} 
