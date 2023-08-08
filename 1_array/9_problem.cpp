#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count=0;
	    int arr[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>arr[i];
	   }
	    for(int i=0;i<n;i++)
	   {
	       for(int j=i+1;j=n;j++)
	       {
	           if(arr[i]==arr[j])
	           {
	               count++;
	           }
	       }
	   }
	   cout<<n-count<<endl;
	}
	return 0;
}
