//This is the bubble sort algorithm which is used for 


#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
		}
	}
}
int main(){
	int arr[]={10,1,7,6,14,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,size);
		cout<<"[ ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<" ]";
	return 0;
}
