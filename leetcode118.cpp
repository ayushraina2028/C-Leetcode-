#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector <int> > v;
        for (int i = 1; i <= numRows;i++) {
            vector <int> a(i);
            v.push_back(a); // adding vector of required size
        }

    // value at index i,j is iCj;
    // but here we will use method 3


    // first fill first and last element by 1 then fill by required sums
    // v[i][j] = v[i-1][j] + v[i-1][j-1]

    for (int i = 0;i < numRows;i++) {
        for (int j = 0;j <= i;j++) {
            if (j == 0 || j == i) {
                v[i][j] = 1;
            }
            else {
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    } 
    return v;
    }

};