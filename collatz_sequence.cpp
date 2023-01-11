/*
 Longest Collatz Sequence
 Project Euler Probelm #14

	How the Collatz Sequence works:
		Start with n
		-> If n is even, n = n/2
		-> Else, n = (3*n) + 1
		-> Increment sequence length and repeat until n = 1
		
	We're doing this for all n < 1000000.
*/

#include<iostream>

int main(){

	int n;
	int max_length = 0;
	int n_length = 0;
	int answer;
	
	for(int i = 99999; i > 1; i--){
		n = i;
		n_length = 0;
	
		while(n != 1){
			if(n % 2 == 0){
				n = n/2;
			}
		
			else{
				n = (3*n) + 1;
			}
		
			n_length += 1;
		
		}	// End while(n != 1)
			
		if(n_length >= max_length){
			max_length = n_length;
			answer = i;
		}	// End if()
			
	}	//	End for()
	
	std::cout << "Answer = " << answer << std::endl;
	std::cout << "Chain Length = " << max_length << std::endl;
		
}	// End main()








