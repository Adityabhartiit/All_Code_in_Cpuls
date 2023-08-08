#include <iostream>
using namespace std;
int main(){

    int n,cont=0;
    cout <<" Enter the number of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    { 
           if(!(arr[i]<=arr[i+1]))
           {
                cont++;
           } 
    
    }
    if(cont>0)
    {
        cout<<"not sorted"<<endl;
    }
       return 0; 
    }