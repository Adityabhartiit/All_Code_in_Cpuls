#include <bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size ;
    heap(){
        arr[0]= -1;
        size  = 0;
    }
    void insert(int val){
        size = size +1;
        int index = size;
        arr[index]=val;
        while(index >1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }}
        }
        void print() {
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
                
            }
              cout<<endl;
        }
        void deletefromHeap(){
            if(size==0){
                cout<<"nothind to delete"<<endl;

            
            return;
        }
        arr[1]=arr[size];
        int i=1;
        while(i<size){
            int leftindex = 2*i;
            int rightindex= 2*i+1;
            if(rightindex < size or arr[i] << arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightindex < size or arr[i]< arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else{
                return;
            }
        }

        }       
    };

    int main(){
        heap h;
        h.insert(19);
        h.insert(49);
        h.insert(20);
        h.insert(69);
        h.insert(90);
        h.print();
        h.deletefromHeap();
         h.print();
    }
