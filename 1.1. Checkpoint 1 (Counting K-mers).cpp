#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string dna;
	int k;
	
	cout << "DNA: ";
	cin >> dna;
	cout << "k: ";
	cin >> k;
	
	vector<string> substrings;
	vector<int> counts;
	
	for (int i = 0; i <= dna.length() - k; i++) {
		string kmer = dna.substr(i, k);
		bool found = false;
		
		for (int j = 0; j < substrings.size(); j++){
		if (substrings[j] == kmer)  {
			counts[j]++;
			found = true;
			break;
		}
	}
	
	if (!found) {
			substrings.push_back(kmer);
			counts.push_back(1);
		
		}}
	
	for (int i = 0; i < substrings.size(); i++) {
		cout << substrings[i] << ":" <<counts[i] << endl;
	}
	
	return 0;
	
}