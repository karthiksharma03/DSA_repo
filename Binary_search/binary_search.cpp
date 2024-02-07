#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key);

int main(){
	int arr[]={2,4,6,8,12,18};
	int a[]={3,8,11,14,16};
	
	int index=binary_search(arr,6,18);
	
	int odd_index=binary_search(a,5,11);
	
	cout<<"The element is found at the index :"<<index<<endl;
	
	cout<<"The element is found at the index of the odd array is  :"<<odd_index<<endl;

}

int binary_search(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	
	int mid=(start+end)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			return mid;
		}
		
		if(key>mid[arr]){
			start=mid+1;
		}
		
		else{
			end=mid-1;
		}
		
		mid=(start+end)/2;
	}
	return -1;
}

