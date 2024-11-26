#include<iostream>
using namespace std;

class b_search{
    int array[10]={10,11,12,13,14,15,16,17,18,19};
    public:
    void binary_search();
};

void b_search :: binary_search(){

int start=0;
int end=9;
int mid = (start+end)/2;

int key;
cout<<"Enter the number you want to find: ";
cin>>key;

while(start<=end){
    if(array[mid]==key){
        cout<<"Element found at index "<<mid<<"!!!"<<endl;
        break;
    }
    else if(array[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
    if(start==end && mid!=key){
        cout<<"Element not found!!!"<<endl;
    }
}
}


int main(){
b_search ob1;
ob1.binary_search();
return 0;
}