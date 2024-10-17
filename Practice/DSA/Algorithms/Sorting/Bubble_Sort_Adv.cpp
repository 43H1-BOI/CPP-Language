#include<iostream>
#include<conio.h>
using namespace std;

void getArr(int arr[ ] , int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void display(int arr[ ] , int size) {
	// for (auto i : arr) {
	// 	cout << i << "  ";
	// }
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}

void bubbleSortAdv(int arr[ ] , int size) {
	for (int i = 0; i < size - 1; i++) {
		bool flag;
		for (int j = 0; j < size - i - 1; j++) {
			flag = false;
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = true;
			}
		}
		display(arr , size);

		if (!flag) {
			break;
		}

	}
}

void bubbleSortBasic(int arr[ ] , int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main( ) {
	int size;
	cin >> size;
	int* arr = new int[size];

	getArr(arr , size);

	bubbleSortAdv(arr , size);
	display(arr , size);
	return 0;
}