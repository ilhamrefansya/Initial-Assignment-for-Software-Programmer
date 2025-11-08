#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string dna;
	string complement = " ";
	cout << "DNA: " << '\n';
	cin >> dna;
	
	for (int i = 0; i < dna.length(); i++)
	if (dna[i] == 'A') {
		complement += 'T'; 
	}
	else if (dna[i] == 'T') {
		complement += 'A';
	}
	else if (dna[i] == 'C') {
		complement += 'G';
	}
	else if (dna[i] == 'G') {
		complement += 'C';
	}
	else {
		cout << "Masukkan input yang benar(input only A,T,C,G)!" << '\n';
	}
	
	string invcomp(complement.rbegin(), complement.rend());

	cout << "complement: " << complement << '\n';
	cout << "invers complement: " << invcomp << '\n';
}