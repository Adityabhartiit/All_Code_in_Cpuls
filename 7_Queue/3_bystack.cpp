#include <bits/stdc++.h>
using namespace std;
class que{
    stack<int> s1;
    stack<int> s2;
    public :
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }
    bool empty()
    {
        if(s1.empty() and s2.empty())
        return true;
        else
        return false;

    }

};
int main(){
 que q;
 for(int i=1;i<=5;i++){
    q.push(i);
 }
 for(int i=1;i<=6;i++){
    cout<<q.pop()<<endl;
    
 }
 
}