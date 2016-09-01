/*

The number sequence game starts with a sequence S of N numbers written on a line. Two players alternate turns. At his turn, a player must select and remove either the first or the last number remaining in the sequence.

The player score is the sum of all the numbers he has taken. Each player attempts to maximize his own sum.

If N = 4 and S = {1, 2, 10, 3}, then each player maximizes his score as follows:

Player 1: removes the first number (1)

Player 2: removes the last number from the remaining sequence (3)

Player 1: removes the last number from the remaining sequence (10)

Player 2: removes the remaining number (2)

Player 1 score is 1 + 10 = 11.

Let F(N) be the score of player 1 if both players follow the optimal strategy for the sequence S = {s1, s2, …, sN} defined as:

s1 = 0

si+1 = (si2 + 45) modulo 1 000 000 007

The sequence begins with S = {0, 45, 2070, 4284945, 753524550, 478107844, 894218625, …}.

You are given F(2) = 45, F(4) = 4284990, F(100) = 26365463243.

Find F(10^4) and F(10^8).
*/


#include <iostream>
using namespace std;
int isEven(unsigned long int i)
{
	if(i%2==0)
		return 1;
	else 
		return 0;
}

int main() {
	
	unsigned long int N = 1000000007; //Max value
	unsigned long int count = 0 ; //F(10^8) will not exceed 18 digits so long int is enough
	unsigned long int fcount = 0;
	unsigned long int stop1 = 10000;
	unsigned long int stop2 = 100000000;
	
	for(unsigned long int i = 1; ; i++)
	{
//Greedy Approach since S0 is 0 so Player 1 selects the last number in the sequence  
		if(isEven(i))
			fcount += count;
		if(i == 100 )
			cout << "F(100) is "<< fcount << endl;
		if(i == stop1 ) 
			cout << "F(10^4) is " << fcount << endl;
		if(i == stop2 )
		{ 
			cout << "F(10^8) is " << fcount << endl;
			break;
		}

		count = ((count * count )+45)% N;

	}
	return 0;
}



