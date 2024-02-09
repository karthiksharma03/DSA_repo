//searching the pivot element in a rotated sorted array 

#include<iostream>

int get_pivot(int arr[],int size);
//int binary_search(int arr[],int size,int start,int end);
using namespace std;

int main(){
	int arr[]	={5,6,7,1,2,3,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	int pivot=get_pivot(arr,size);
	cout<<pivot<<endl;
}

int get_pivot(int arr[],int size){
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	
	while(start<end){
		if(arr[mid]>=arr[0]){
			start=mid+1;
		}
		else{
			end=mid;
		}
		
		mid=start+(end-start)/2;
	}
	return start;
}
