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
    int max=0;
    int min=100000;
     for(int i=0;i<n;i++)
     {
        if(arr[i]>max){
            max=arr[i];
        // max=max(max,arr[i]);
            
        }
        if(arr[i<min]){
            min=arr[i];
        }
     }
     cout<<max<<"\n"<<min;

return 0;

}