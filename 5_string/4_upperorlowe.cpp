#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    string str;
    string str2 ="AdityaBharti";
    cout<<str2<<endl;
for(int i=0;i<str2.size();i++)
{
    if(str2[i]>='a'&& str2[i]<='z')
    {
        str2[i] -= 32;
    }
}
cout<<str2<<endl;
for(int i=0;i<str2.size();i++)
{
    if(str2[i]>='A'&& str2[i]<='Z')
    {
        str2[i] += 32;
    }
}
cout<<str2<<endl;
// inbuilt
transform(str2.begin(),str2.end(),str2.begin(),::toupper);
cout<<str2<<endl;
transform(str2.begin(),str2.end(),str2.begin(),::tolower);
cout<<str2<<endl;

}