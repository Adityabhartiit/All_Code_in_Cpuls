#include <iostream>
using namespace std;
int main()
{
    string s ="adi";
    s.insert(3,"tya");
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    string s1= s.substr(3,3);
    cout<<s1<<endl;
    // string to integer
    string s2="456";
    int x=stoi(s2);
    cout<<x+2<<endl;
    // int to string
    int c=454;
    cout<<to_string(c)+"4";
}