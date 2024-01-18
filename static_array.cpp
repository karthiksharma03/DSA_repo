//Arrays 
#include<iostream>

//This is a function which is used to print the elements in the array 
int print_array(int arr[],int size){
	for(int i=0;i<size;i++){
		std::cout<<"The Numbers are :"<<arr[i]<<std::endl;
	}
}


int main(){
	int a[5]={1,2,3,4,5};
	print_array(a,5);
	//we can also access the elements of the array individually without any loops or function
	std::cout<<a[0]<<std::endl;//gives the first element of the array 
	std::cout<<a[1]<<std::endl;// The second
	
	// we can also modify the array values by the below syntax
	
	a[3]=6;
	std::cout<<a[3]<<std::endl;
	
}
