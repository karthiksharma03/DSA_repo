//The optimized binary search algorithem where the correct formula of the 
// mid value will be given 

#include<iostream>
using namespace std;

int binary_search(int arr[],int size, int key){
	int start=0;
	int end =size-1;
	int mid;
	mid=start+(end-start)/2;
	
	while(start<=end){
		if(key==arr[mid]){
			return mid;
		}
		if(key>arr[mid]){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		
		mid=start+(end-start)/2;
	}
	
	return -1;
}
int main(){
	
	int arr[]={1,2,4,5,7,9,10};
	
	int index=binary_search(arr,7,9);
	
	cout<<"The element is found at the index :"<<index<<endl;
	
	return 0;
	
}
