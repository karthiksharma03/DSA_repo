#include<iostream>
using namespace std;

long long int binary_search(int x){
    int start = 0;
    int end = x;
    int mid;
    int ans = -1;
    
    while (start <= end) {
        mid = start + (end - start) / 2;
        long long square = static_cast<long long>(mid) * mid; // Use long long to avoid overflow
        
        if (square == x) {
            return mid;
        } else if (square < x) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int x;
    cout << "Enter a value: " << endl;
    cin >> x;
    
    int result = binary_search(x);
    cout << result << endl;
    
    return 0;
}

