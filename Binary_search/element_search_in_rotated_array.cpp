//finding an element in the sorted rotated array 

// and here we are going to search an element in the rotated array using pivot concept and through binary search 

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

int binary_search(int arr[],int size,int start,int end,int key){
	int s=start;
	int e=end;
	int mid=s+(e-s)/2;
	
	while(s<=e){
		if(key==arr[mid]){
			return mid;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}
		else if(key<arr[mid]){
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return -1;
}

#include<iostream>
using namespace std;

int main(){
	int arr[]={6,7,1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int pivot=get_pivot(arr,size);
	
	cout<<"The pivot element is : "<<pivot<<endl;
	
	int key=2;
	int result;
	if(key>arr[pivot] &&key<=arr[size-1]){
		result= binary_search(arr,size,pivot,size-1,key);
	}
	else{
		result= binary_search(arr,size,0,pivot-1,key);
	}
	
	if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else
	 {
        
		cout << "Element not found" << endl;
	}
        
	return 0;
	
}
