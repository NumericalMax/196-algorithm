# 196-algorithm
Implementation of the 196-algorithm to find palindromes in an iteratively computed number sequence.

Inspired by https://www.youtube.com/watch?v=bN8PE3eljdA&t=374s

## Execution
```
git clone https://github.com/NumericalMax/196-algorithm.git
cd 196-algorithm
g++ main.cpp -o main
./main
```
## Approach
Given a number n we iteratively reassign to n the sum of n and the reverse of n until n is a palindrome.
 
Example Given:
```
n = 19 // no palindrome, iteration = 0
n = 19 + 91 = 110 // no palindrome, iteration = 1
n = 110 + 11 = 121 // palindrome, iteration = 2
```
Note, that n is of type int. This can result in exceeding the allocated storage size for larger n or higher iterations. To prevent, you can set the datatype to long or a much larger datatype.

## Outcome

|Number|Iterations|Final palindrome|
|------|:--------:|---------------:|
|1|	0|	 	1|
|2|	0|	 	2|
|3|	0|	 	3|
|4|	0|	 	4|
|5|	0|	 	5|
|6|	0|	 	6|
|7|	0|	 	7|
|8|	0|	 	8|
|9|	0|	 	9|
|10|	1|	 	11|
|11|	0|	 	11|
|12|	1|	 	33|
|13|	1|	 	44|
|14|	1|	 	55|
|15|	1|	 	66|
|16|	1|	 	77|
|17|	1|	 	88|
|18|	1|	 	99|
|19|	2|	 	121|
|20|	1|	 	22|
