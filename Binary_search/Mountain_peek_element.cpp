// Here Mountain array is given and we need to find out the peek element using binary search 


#include<iostream>
using namespace std;


int peak_element(int arr[],int size);
int main(){
	
	int arr[5]={1,2,3,4,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	int peak=peak_element(arr,size);
	cout<<"The peak element of the array is :"<<peak<<endl;
	
	
	return 0;
	
}

int peak_element(int arr[],int size){
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	
	while(start<end){
		if(arr[mid]<arr[mid+1]){
			start=mid+1;
		}
		else{
			end=mid;
		}
		
		mid=start+(end-start)/2;
	}
	return start;
}
