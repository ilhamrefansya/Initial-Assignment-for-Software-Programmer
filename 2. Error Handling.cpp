#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> errors = {
        "Container descent rate failure",
        "Science Payload descent rate failure",
        "Container position failure",
        "Science Payload position failure",
        "Release failure"
    };
    int x;
    cout << "Masukkan nilai error: ";
    cin >> x;

    vector<string> result;

    for (int i = 0; i < 5; i++) {
        if (x & (1 << i)) {
            result.push_back(errors[i]);
        }
    }

    if (result.empty()) {
        cout << "No error" << endl;
    } else {
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i < result.size() - 1) cout << ", ";
        }
        cout << endl;
    }

    return 0;
}
