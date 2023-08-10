#include<iostream>
using namespace std;
void selection(int arr[],int n)
{int i,j,min,temp;
    for(int i=0;i<n-1;i++)
    {      min=i;
        
            for(int j = i+1; j <n;j++)
           { if(arr[j]<arr[min])
            {
                min=j;
            }
           }
        swap(arr[min],arr[i]);
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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i] ;
    }
    
    cout<<endl<<"Given Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }

    selection(arr,n);

    cout<<endl<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }

return 0;

} 