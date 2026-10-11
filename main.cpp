#include <iostream>

using std::cout;

// Lab 7 — Joe Barron
// CIS 5 Week 07 · Two arrays

int main() {

	const int N = 5;
	int quiz[N] = { 91, 85, 83, 97, 81 };
	int sum1 = 0;
	int hi1 = quiz[0];

	for (int i = 0; i < N; ++i) 
	{
		sum1 += quiz[i];
		if (quiz[i] > hi1) 
		{
			hi1 = quiz[i];
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
	

  return 0;
}
