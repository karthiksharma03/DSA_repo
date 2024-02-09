#include<iostream>
using namespace std;
int square_root(int n){
	int start =0;
	int end=n;
	int mid=start+(end-start)/2;
	int ans=-1;
	
	while(start<=end){
		long long  square=static_cast<long long>(mid)*mid;
		if(square==n){
		return mid;
	}
	else if(square<n){
		ans=mid;	
		start=mid+1;
	}
	
	else {
		end=mid-1;
	}
	
	mid=start+(end-start)/2;
	}
	return ans;
}

double percision_squareroot(int n,int percision,int result){
	double factor=0.1;
	double ans=result;
	for(int i=0;i<percision;i++){
		factor/=10;
		
		for(double j=ans;j*j<=n;j+=factor){
			ans=j;
		}
	}
	return ans;
}
int main(){
	int x;
	std::cout<<"Enter a number :"<<endl;
	std::cin>>x;
	
	int result=square_root(x);
	double percision=percision_squareroot(x,3,result);
	cout<<"The sqaure root is :"<<percision;
	
	return 0;
}
