//Dynamic list 

//list as adt where we use it as the dynamic array's

//printing the empty list has size zero
//inserting an element into a list
//remove the element 
//count the number of the elements
//read/modify the elements
//specify the data type 

#include <iostream>

const int Max_Size = 10;

void chk_list(int arr[], int size) {
    if (size == 0) {
        std::cout << "The list is empty!" << std::endl;
    } else {
        std::cout << "There are elements in the list:" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << "Element at index " << i << ": " << arr[i] << std::endl;
        }
    }
}

int insert_element(int arr[], int& size, int index, int value) {
    if (index < 0 || index > size || size >= Max_Size) {
        std::cout << "Invalid Index or List Full!" << std::endl;
        return size;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    size++;

    return size;
}

int count_elements(int arr[]){
	int count=0;
	for(int i=0;i<Max_Size;i++){
		if(arr[i]!=0){
			count++;
		}
	}
	std::cout<<"The count in the number of the elements are :"<<count<<std::endl;
	
}

int remove_element(int arr[],int size,int index){
	if (index < 0 || index > size || size >= Max_Size) {
        std::cout << "Invalid Index or List Full!" << std::endl;
        return size;
    }
    for(int i=index;i<size;i++){
    	arr[i]=arr[i+1];
	}
	size--;
}
int main() {
    int a[Max_Size] = {1, 2, 3, 4, 5};
    int size = 5;
    chk_list(a, size);
    
    size = insert_element(a, size, 2, 10);
    
    chk_list(a, size);
    
    count_elements(a);
    
    remove_element(a,size,4);

    chk_list(a,size);
    return 0;
}

