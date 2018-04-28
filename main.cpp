/*
 Author: Max Kapsecker
 Version: 1.0
 
 This code snippet performs the 196-algorithm to find number palindromes.
*/

#include <iostream>

/*
This function takes a number as input and reverses it

params: integer k
return: reversed integer k
 
example: 12345 -> 54321
*/
int reverseNumber(int k){
	int remainder, reversedNumber = 0;
	while(k != 0){
		remainder = k % 10;
        	reversedNumber = reversedNumber * 10 + remainder;
        	k /= 10;
	}
	return reversedNumber;
}

int main(){
    
    int totalNumber, iterations, temp;
	std::cout << "How many number do you want to check?" << std::endl;
	std::cin >> totalNumber;
	std::cout << "Number" << "\t" << "Iterations" << "\t" << "Final palindrome" << std::endl;
    
	for(int i = 1; i <= totalNumber; ++i){
        iterations = 0;
        // Is the number already a palindrome (e.g. 111)
		if(i == reverseNumber(i)){
            std::cout << i << "\t" << iterations << "\t \t" << i << std::endl;
            continue;
        }
		temp = i + reverseNumber(i);
		iterations++;
        // Iterate until we have foung a palindrome
		while(temp != reverseNumber(temp)){
			temp = temp + reverseNumber(temp); 
			iterations++;
		}
        // Print result
        if(temp < 0){
            std::cout << i << "\t" << "Could not find a solution that fit into the datatype int" << std::endl;
        }else{
            std::cout << i << "\t" << iterations << "\t \t" << temp << std::endl;
        }
	}
    
	return 0;
}
