#include<iostream>
#include<algorithm>
using namespace std;

class Sort{
    int array[10]={2,6,7,8,9,0,3,4,5,1};
    public:
    void bubble_sort();
};

void Sort :: bubble_sort(){
    for(int i=0; i<9; i++){
        for(int j=0; j<(9-i); j++){
            if(array[j]>array[j+1]){
                swap(array[j] , array[j+1]);
            }
        }
    }
    for(int i=0; i<10; i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    Sort ob1; 
    ob1.bubble_sort();
    return 0;
}