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
    int m;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==m){
            cout<<"Found";
        }}
        
    



return 0;

}