#include <iostream>
#include <vector>
#include <string>

using namespace std;

int BinSearchLeft(const vector<int>& vec, int element) {
    int l = -1;
    int r = vec.size();

    while(r - l > 1) {
        int m = (r + l) / 2;

        if(vec[m] >= element) {
            r = m;
        } else {
            l = m;
        }
    }

    return r;
}

int BinSearchRight(const vector<int>& vec, int element) {
    int l = -1;
    int r = vec.size();

    while(r - l > 1) {
        int m = (r + l) / 2;

        if(vec[m] > element) {
            r = m;
        } else {
            l = m;
        }
    }

    return l;
}

string BinCheck(const vector<int> vec, int element) {
    int index = BinSearchLeft(vec, element);

    if(vec[index] == element) {
        return "This element exists at " + to_string(index) + " position";
    } else {
        return "No such element";
    }
}

int main() {
    vector<int> someVector = {-10, -9, 1, 1, 1, 2, 5, 6, 6, 99, 1939};

    cout << BinSearchLeft(someVector, 1) << "\n";
    cout << BinSearchRight(someVector, 1) << "\n";

    cout << BinSearchLeft(someVector, 6) << "\n";
    cout << BinSearchRight(someVector, 6) << "\n";

    cout << BinCheck(someVector, 3) << "\n";
}