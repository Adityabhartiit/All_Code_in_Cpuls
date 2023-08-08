#include <iostream>
using namespace std;
int main(){

    int n;
    cout <<" Enter the number of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Element you  want to find : ";
    int m,s=0,e=n;
   // int key;
    cin>>m;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==m){
            cout<<"found";
        }
        else if(arr[mid]>m){
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    
return 0;

}