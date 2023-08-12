#include <iostream>
using namespace std;
int main()
{
 string s;

string s1="Adi";
 string s2="tya";
 cout<<s1<<s2<<endl;
 cout<<s1+s2<<endl;
  s1.append(s2);
 cout <<s1<<endl;
 cout<<s1[2]<<endl;
// s1.clear() ; for clear string
// compair
 cout<<s2.compare(s1)<<endl;
 
 if(s1.empty())
 {cout<<"empty";}
 else
 {cout<<"not"<<endl;}
return 0;
}
