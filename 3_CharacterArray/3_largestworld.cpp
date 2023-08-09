#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();
 
    int i=0, currlen=0, maxlen=0;
    while(1)
    {
        if(arr[i]==' '|| arr[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
            }
            currlen++;
        }
        else{
        currlen++;
        if(arr[i]=='\0')
        break;}
    }
    cout<<maxlen<<endl;
    return 0;
}