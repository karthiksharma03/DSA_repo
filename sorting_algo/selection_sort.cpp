//Here the selection sort algorithem is performed where the algorithem comes under the sorting techniques
// so in this sorting technique our algorithem runs on rounds/passes in total 
//In the case of selection sort, the number of passes indeed tends to be 
//n-1, where 
//n is the size of the array.

//This is the working of the algorithem 

#include<iostream>
using namespace std;

//The reference of the variable should be given because otherwise the variable will be considered as local variable 
void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void selection_sort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		int Min_Index=i;
		
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[Min_Index]){
				Min_Index=j;
			}
		}
		swap(arr[Min_Index],arr[i]);
	}
}
int main(){
	int arr[]={29,72,98,13,87,66,52,51,36};
	int size=sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr,size);
			
	cout<<"The sorted array is :"<<endl;		
		cout << "[ ";
	for (int i = 0; i < size; i++) {
    			cout << arr[i];
    		if (i != size - 1) {
        cout << ", ";
    		}		
		}
cout << " ]";
	
	
	
	return 0;
	
}
