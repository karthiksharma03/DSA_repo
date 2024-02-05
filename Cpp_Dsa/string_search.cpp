//Linear search in strings finding a letter 

//The input is :Karthik

#include<iostream>
#include<string>
using namespace std;

int main(){
	string name="karthik";
	bool found=false;
	for(int i=0;i<name.length();i++){
		if(name.at(i)=='r'){
			found=true;
			
			break;
		}
		
	}
	
	if(found==true){
		std::cout<<"The element is found"<<std::endl;
	}
	else{
		std::cout<<"The element is not found"<<std::endl;
	}
	return 0;
}
