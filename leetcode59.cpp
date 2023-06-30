#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector <vector <int> > matrix(n, vector<int>(n,0));
        vector <int> parts;

        int min_row = 0;
        int min_column = 0;
        int max_row = n - 1;
        int max_column = n - 1;
        int count = 1;

        while(min_row <= max_row && min_column <= max_column) {

            for(int i = min_column; i <= max_column;i++) {
                (matrix[min_row][i] = count);
                count++;
            }
            min_row++;

            if(min_row > max_row || min_column > max_column) {
            break;
        }

            for(int i = min_row;i <= max_row;i++) {
                (matrix[i][max_column] = count);
                count++;
            }
            max_column--;

            if(min_row > max_row || min_column > max_column) {
            break;
        }

            for(int i = max_column;i >= min_column;i--) {
                (matrix[max_row][i] = count);
                count++;
            }
            max_row--;

            if(min_row > max_row || min_column > max_column) {
            break;
        }

            for(int i = max_row;i >= min_row;i--) {
                (matrix[i][min_column] = count);
                count++;
            }
            min_column++;
        }


        return matrix;


    }
};