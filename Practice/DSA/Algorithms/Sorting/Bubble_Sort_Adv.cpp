#include<iostream>
using namespace std;

#include<conio.h>

void display(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void bubbleSort2(int arr[], int size){
	for(int i = 0; i < size-1; i++){
		// int swapped;
		for(int j = 0 ; j < size - i - 1; j++){
		// swapped = 0;
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			  //	swapped = 1;
			}
		}
		display(arr,size);
		/*
		if(!swapped){
			break;
		}
		*/
	}
}

void bubbleSort(int arr[], int size){
	for(int i = 0 ; i < size ; i++){
		for(int j = i+1 ; j < size ; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	clrscr();
	int size = 10;
	int arr[10] = {1,13,51,9,6,2,0,24,3,27};
	bubbleSort2(arr,size);
	display(arr,size);
	return 0;
}