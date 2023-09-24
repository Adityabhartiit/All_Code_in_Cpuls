
#include <bits/stdc++.h>
using namespace std;
class Stack{
	int totalsize;
	int currentsize;
	int * arr;
	public:
	
	Stack(int size){
		this->totalsize = size;
		this->currentsize=0;
		this->arr = new int[this->totalsize];
	}
	bool isEmpty(){
		return this->currentsize==0;
	}
	bool isFull(){
		return this->currentsize == this->totalsize;
	}
	void push (int value){
		if(isFull()){
			cout<<"OVERFLOW"<<endl;
		}
		else
		{
			this->arr[this->currentsize] = value;
			this->currentsize++;
		}
	}
	int pop(){
		if(isEmpty()){
			cout<<"OVERFLOW"<<endl;
		}
		else{
			this->currentsize++;
			return this->arr[this->currentsize];
		}
	}
	int peek(){
		if(isEmpty()){
			cout<<"No item to return"<<endl;
			return -1;
		}
		else
		{
			return this ->arr[this->currentsize-1];
		}
	}
};


int main(){

Stack * newStack = new Stack(3);
newStack->push(5);
newStack->push(6);
cout<<newStack->pop()<<endl;
cout<<newStack->peek()<<endl;

	return 0;
}

