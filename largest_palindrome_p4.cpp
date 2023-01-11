#include <iostream>
#include <cmath>
#include <string>

int main(){
	int largest = 0;
	int num, p1;
	
	for(int i = 100; i <= 999; i++){
		for(int j = 100; j <= 999; j++){
			num = i * j;
			auto ns = std::to_string(num);
			if(ns[0] == ns[5] && ns[1] == ns [4] && ns[2] == ns[3]){
				p1 = num;
				}	// End if()
			if(p1 > largest){
				largest = num;
			}
		}	// End for(j)
	}	// End for(i)
	
	std::cout<<"Largest palindrome = "<<largest<<std::endl;	

}
