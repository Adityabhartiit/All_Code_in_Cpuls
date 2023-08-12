#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<str;
    string str1(10,'a');
    cout<<str1<<endl;
    // or
    string str2 ="AdityaBharti";
    cout<<str2<<endl;
    string str3;
    getline(cin,str3);
    cout<<str3;
    str.append(str1);
    cout<<str<<endl;
    // or
    cout<<str+str1<<endl;
    // for clear string
    str.clear();
    // compair
    cout<<str2.compare(str1);
    // empty check
  if(  str.empty())
  cout<<"empty"<<endl;
  else
  cout<<"no"<<endl;
  //for erasing
  str1.erase(3,2);
  // finding
 cout<<str2.find("adi");
// insert in index;
str2.insert(3,"lom");
// for length
cout<<str1.length()<<endl;
//substring.
string s= str1.substr(3,3);
cout<<str1<<endl;


}