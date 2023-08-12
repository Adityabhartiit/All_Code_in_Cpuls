#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s= "aditya bharti";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    cout<<s.find("r")<<endl;
    return 0;
}