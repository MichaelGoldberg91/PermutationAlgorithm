#include <iostream>;
#include <string>;
#include <algorithm>

using namespace std;

int main()
{
	string a = "kitchen"; // saving word into a string to find its length
	string b = "thicken"; // saving word into a string to find its length

	string array1[] = { "k", "i", "t", "c", "h", "e", "n" }; // making the first word seperated into an array
	string array2[] = { "t", "h", "i", "c", "k", "e", "n" }; // making the second word seperated into an array

	int array1length = a.length(); // find the length
	int array2length = b.length(); // finding the length

	if (array1length == array2length) //checking lengths
	{ 
		sort(array1, array1 + array1length); //sorting array1
		sort(array2, array2 + array2length); //sorting array2

		if (equal(begin(array1), end(array1), begin(array2))) // if they match output they ARE a permutation, using a bool 
		{
			cout << "These two words ARE permutations of each other" << endl;	
		}
		else
		{
			cout << "These two words are NOT permutations of each other" << endl; // if statements failure output
		}
	}

	else // if statenebt failure output
	{
	cout << "These two words are NOT permutations of each other" << endl;
	}





	































	/*
	for (int x = 0; x < array1length; x++) // for loop to run through the first array
	{
		for (int z = 0; z < array2length; z++) // for loop to run through the second array
		{
			if (array1[x] == array2[z]) //see if letter in array1 is equal to letter in array2
			{
				array1[x] = "1"; // if true set that spot in array1 to "1"
				array2[z] = "1"; // if true set that spot in array2 to "1"
			}
			else
			{ // else nothing happens
			}
		}
	}
	string array1result = ""; // blank result string
	string array2result = ""; // blank result string

	for (int d = 0; d < array1length; d++) // creating the result string with what the results were from above for array1
	{
		array1result += array1[d];
	}

	for (int e = 0; e < array2length; e++) // creating the result string with what the results were from above for array2
	{
		array2result += array2[e];
	}

	if (array1result == array2result) // if they match output they ARE a permutation
	{
		cout << "These two words ARE permutations of each other" << endl; 
	}
	else // if fails output they ARE NOT a permutation
	{
		cout << "These two words are NOT permutations of each other" << endl;
	}
	*/

	system("pause"); // pause to see results
}

