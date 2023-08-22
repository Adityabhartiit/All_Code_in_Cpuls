#include <bits/stdc++.h>
using namespace std;
 int main(){
    vector<int> v;
for(int i=1;i<6;i++){
    v.push_back(i);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
vector<int> v2(3,2);
for(auto element:v2)
{
    cout<<element<<endl;
}
//swap
swap(v,v2);
for(auto element:v)
{
    cout<<element<<endl;
}
for(auto element:v2)
{
    cout<<element<<endl;
}
 }