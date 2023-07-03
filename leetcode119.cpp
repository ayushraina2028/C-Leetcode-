#include <iostream>
#include <vector>
using namespace std;


vector <int> getRow(int rowIndex) {
    rowIndex++;
    vector <vector <int> > v;
    for (int i = 1; i <= rowIndex;i++) {
        vector <int> a(i);
        v.push_back(a); // adding vector of required size
    }

    for (int i = 0;i < rowIndex;i++) {
        for (int j = 0;j <= i;j++) {
            if (j == 0 || j == i) {
                v[i][j] = 1;
            }
            else {
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }

    return v[rowIndex-1];
}

int main() {
    // leetcode 118 , HW Leetcode 119
    // Given an integer numRows generate Pascals triangle

    int n;
    cout << "Enter n: ";
    cin >> n;

    

    vector<int> v = getRow(n);


    // see working very fine
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    
}