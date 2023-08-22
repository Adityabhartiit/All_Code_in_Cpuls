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
//and other methode
vector<int>:: iterator it;
for(it = v.begin();it!=v.end();it++)
{
    cout<<*it<<endl;
}
for(auto element:v)
{
    cout<<element<<endl;
} 
// other vector
vector<int> v2(3,2);
for(auto element:v2)
{
    cout<<element<<endl;
}


 }