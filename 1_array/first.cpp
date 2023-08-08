#include<iostream>
using namespace std;
int opr(int *a, int *n , int *sum){
    *sum =*a + *n;
    return *sum;
}
int main(){
    int a,b;
    cin>>a>>b;

    int sum=0;
        
    int d= opr(&a,&b,&sum);
    cout<<d<<endl;


}