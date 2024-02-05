#include<iostream>
int binary_search(int arr[],int search,int size){
	int mid;
	int low=0;
	int high=size-1;
	
	
	while(low<=high){
			mid=low+(high-low)/2;
			
			if(arr[mid]>search){
				high=mid-1;
			}
			else if(arr[mid]<search){
				low=mid+1;
			}
			else{
				return mid;
			}
		}
	}


int main(){
	int size;
	int arr[5]={45,47,48,69,60};
	size=sizeof(arr)/sizeof(arr[0]);
	int k=binary_search(arr,69,size);
	std::cout<<"The element found at index :"<<k;
	
	return 0;
}
