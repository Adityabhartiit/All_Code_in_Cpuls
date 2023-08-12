#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<str;
    string str1(10,'a');
    cout<<str1;
    // or
    string str2 ="AdityaBharti";
    cout<<str2;
    string str3;
    getline(cin,str3);
    cout<<str3;
    //sorting
    sort(str2.begin(),str2.end());
    cout<<str2;

}