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
    int mx=-10000000;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }


return 0;

}