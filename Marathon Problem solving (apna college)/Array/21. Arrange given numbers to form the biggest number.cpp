#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool myCompare(string X, string Y) {
    string XY = X + Y;
    string YX = Y + X;
    return XY > YX;
}

void arrangeLargestNumber(vector<int>& numbers) {
    vector<string> numStrings;
    for (int num : numbers) {
        numStrings.push_back(to_string(num));
    }

    sort(numStrings.begin(), numStrings.end(), myCompare);

    cout << "Largest arrangement: ";
    for (string numStr : numStrings) {
        cout << numStr;
    }
    cout << endl;
}

int main() {
    vector<int> numbers1 = {54, 546, 548, 60};
    vector<int> numbers2 = {1, 34, 3, 98, 9, 76, 45, 4};

    arrangeLargestNumber(numbers1);
    arrangeLargestNumber(numbers2);

    return 0;
}
