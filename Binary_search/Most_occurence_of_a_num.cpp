//binary search find the total number of the occurences of the element and print it 
//using the binary search algorithm 

//logic :first occurence and last occurence of the array is required and 
// The formulae to calculate the total number of the occurences is 

// (last_occurence-first_occurence)+1; 

int first_occurence(int arr[],int size,int key);

int last_occurence(int arr[],int size,int key);



#include<iostream>

using namespace std;
int main(){
	int arr[6]={1,2,3,3,3,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	int index=first_occurence(arr,size,3);
	int last_index=last_occurence(arr,size,3);
	int occurences=(last_index-index)+1;
	
	cout<<"The first occurence of the number is at :"<<index<<endl;	
	cout<<"The last occurence of the number is at :"<<last_index<<endl;
	cout<<"The most occurence of the number is at :"<<occurences<<endl;
	
	return 0;
}

int first_occurence(int arr[],int size,int key){

	int start=0;
	int end=size-1;
	int mid= start+(end-start)/2;
	int ans=-1;
	
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
	int mid= start+(end-start)/2;
	int ans=-1;
	
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
