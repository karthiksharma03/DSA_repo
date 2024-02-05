#include<iostream>
int linear_search(int arr[],int element){
	int size=sizeof(arr)/sizeof(arr[0]);
	
	if(size==0){
		std::cout<<"The array is empty !"<<std::endl;
		
		return -1;
	}
	else{
		for(int i=0;i<size;i++){
			if(arr[i]==element){
				std::cout<<i;
			}
		}
	}
}

int main(){
	int arr[5]={1,2,45,67,78};

	
	
	int k=linear_search(arr,45);
	
	std::cout<<k;
}
