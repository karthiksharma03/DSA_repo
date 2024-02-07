//First and last position of the element in the sorted array 

//so that means if i have an array of 0123222 is there then i need to find out the left most 
//occurence of the two and right most occurence of the two

// Nothing but first and last occurence of the number 2;

// You have given an sorted array with N elements and integer K is given so we have to find out
//The first and last occurenec of that number 


#include<iostream>

int first_occurence(int arr[],int size,int key);
// It says when the first element occurs 

int last_occurence(int arr[],int size,int key);
// used to find the last time where the element is present and returns it's index 


using namespace std;
int main(){
	
	int arr[]={1,2,2,2,2,3};
	
	int index=first_occurence(arr,6,2);
	int index_2=last_occurence(arr,6,2);
	
	cout<<"The first occurence of the element in the array is :"<<index<<endl;
	cout<<"The Last occurence of the element in the array is :"<<index_2<<endl;
	
}

int first_occurence(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid =start+(end-start)/2;
	
	while(start<=end){
		if(key==arr[mid]){
			ans=mid;
			end=mid-1;
		}
		else if(key>arr[mid]){
			start=mid+1;
		}
		else if(key<arr[mid]){
			end=mid-1;
		}
		
		mid=start+(end-start)/2;
	}
	
	return ans;
}


int last_occurence(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid =start+(end-start)/2;
	
	while(start<=end){
		if(key==arr[mid]){
			ans=mid;
			start=mid+1;
		}
		else if(key>arr[mid]){
			start=mid+1;
		}
		else if(key<arr[mid]){
			end=mid-1;
		}
		
		mid=start+(end-start)/2;
	}
	
	return ans;
}





