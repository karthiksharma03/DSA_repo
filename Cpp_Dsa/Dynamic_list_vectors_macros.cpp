#include<iostream>
#include<vector>
#define MAX 100
int main(){
	std::vector<int> arr(MAX);
		
	for(int i=0;i<MAX;i++){
		std::cin>>arr[i];
	}
	std::cout<<""<<std::endl;
	
	for(int i=0;i<MAX;i++){
		std::cout<<"The elements in the array are :"<<arr[i]<<std::endl;
	}
	
	int sum=0;
	for(int i=0;i<MAX;i++){
		sum=sum+i;
	}
	
	std::cout<<"The sum of the elements in the array is :"<<sum<<std::endl;
	
	return 0;
}
