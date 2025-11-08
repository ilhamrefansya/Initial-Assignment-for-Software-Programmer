#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string reversecomplement(string kmer) {
    string comp = "";
    for (char c : kmer) {
        if (c == 'A') comp += 'T';
        else if (c == 'T') comp += 'A';
        else if (c == 'C') comp += 'G';
        else if (c == 'G') comp += 'C';
    }
    
    reverse(comp.begin(), comp.end());
    return comp;
}

int main() {
    string dna;
    int k;

    cout << "DNA: ";
    cin >> dna;
    cout << "k: ";
    cin >> k;

    vector<string> substrings;
    vector<int> counts;

    // ----- Checkpoint 1: Hitung k-mers -----
    for (int i = 0; i <= dna.length() - k; i++) {
        string kmer = dna.substr(i, k);
        bool found = false;

        for (int j = 0; j < substrings.size(); j++) {
            if (substrings[j] == kmer) {
                counts[j]++;
                found = true;
                break;
            }
        }

        if (!found) {
            substrings.push_back(kmer);
            counts.push_back(1);
        }
    }
    cout << "\nReverse Complement Pairs:\n";
    vector<bool> printed(substrings.size(), false);
    
    for (int i = 0; i < substrings.size(); i++) {
        string rev = reversecomplement(substrings[i]);
        
        for (int j = 0; j < substrings.size(); j++) {
            if (i != j && substrings[j] == rev && !printed[j] && !printed[i]) {
                cout << substrings[i] << " <--> " << rev << endl;
                printed[i] = true;
                printed[j] = true;
            }
        }
    }
    
    return 0;
}
