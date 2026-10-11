#include <iostream>

using std::cout;

// Lab 7 — Joe Barron
// CIS 5 Week 07 · Two arrays

int main() {

	const int N = 5; // Size of the arrays
	//Array of Quiz Scores
	int quiz[N] = { 91, 85, 83, 97, 81 }; // Initialize the quiz scores array with 5 elements
	int sum1 = 0;
	int hi1 = quiz[0];

	for (int i = 0; i < N; ++i) // Traverse the array to calculate sum and find highest score
	{
		sum1 += quiz[i]; // Accumulate the sum of quiz scores
		if (quiz[i] > hi1) // Check if the current score is higher than the highest score found so far
		{
			hi1 = quiz[i]; // Update the highest score if the current score is greater
		}
	}
	cout << "==== Quiz Scores ====\n";

	for (int i = 0; i < N; ++i)
	{
		cout << "[" << i << "] " << quiz[i] << " ";
	}
	cout << "\n";
	cout << "Sum: " << sum1 << "\n";
	cout << "Highest: " << hi1 << "\n";

	//Array of Lab Scores
	int lab[N] = { 60, 65, 75, 80, 96 };
	int sum2 = 0;
	int hi2 = lab[0];

	for (int k = 0; k < N; ++k) 
	{
		sum2 += lab[k]; 
		if (lab[k] > hi2)
		{
			hi2 = lab[k]; 
		}
	}
	cout << "==== Lab Scores ====\n";

	for (int k = 0; k < N; ++k)
	{
		cout << "[" << k << "] " << lab[k] << " ";
	}
	cout << "\n";
	cout << "Sum: " << sum2 << "\n";
	cout << "Highest: " << hi2 << "\n";

  return 0;
}
