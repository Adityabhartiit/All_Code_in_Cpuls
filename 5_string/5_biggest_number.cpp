#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<str<<endl;
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
}