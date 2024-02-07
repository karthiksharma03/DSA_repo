//The implementation of the same concept using vectors :

//First and last position of the element in the sorted array 

//so that means if i have an array of 0123222 is there then i need to find out the left most 
//occurence of the two and right most occurence of the two

// Nothing but first and last occurence of the number 2;

// You have given an sorted array with N elements and integer K is given so we have to find out
//The first and last occurenec of that number 

//The output must be in the form 

//The first element :
//The last element :

#include<iostream>
#include<vector>
#include<algorithm> // For std::pair

using namespace std;

int first_occurrence(vector<int> &arr, int size, int key);
int last_occurrence(vector<int> &arr, int size, int key);
pair<int, int> firstandlastposition(vector<int> &arr, int size, int key);

int main(){
    int arr[] = {1, 2, 2, 2, 2, 3};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector
    
    pair<int, int> result = firstandlastposition(vec, vec.size(), 2);
    
    cout << "The first element: " << result.first << endl;
    cout << "The last element: " << result.second << endl;
    
    return 0;    
}

pair<int, int> firstandlastposition(vector<int> &arr, int size, int key){
    pair<int, int> p;
    p.first = first_occurrence(arr, size, key);
    p.second = last_occurrence(arr, size, key);
    
    return p;
}

int first_occurrence(vector<int> &arr, int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        } else if(key > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return ans;
}

int last_occurrence(vector<int> &arr, int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        } else if(key > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return ans;
}

