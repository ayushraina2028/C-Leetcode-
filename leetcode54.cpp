#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int min_row = 0;
        int min_column = 0;
        int max_row = matrix.size() - 1;
        int max_column = matrix[0].size() - 1;
        int rows = matrix.size();
        int columns = matrix[0].size();
        vector <int> spiral;


        while(min_row <= max_row && min_column <= max_column) {

            for(int i = min_column; i <= max_column;i++) {
                spiral.push_back(matrix[min_row][i]);
            }
            min_row++;

            if(min_row > max_row || min_column > max_column) {
            break;
        }

            for(int i = min_row;i <= max_row;i++) {
                spiral.push_back(matrix[i][max_column]);
            }
            max_column--;

            if(min_row > max_row || min_column > max_column) {
            break;
        }

            for(int i = max_column;i >= min_column;i--) {
                spiral.push_back(matrix[max_row][i]);
            }
            max_row--;

            if(min_row > max_row || min_column > max_column) {
            break;
        }

            for(int i = max_row;i >= min_row;i--) {
                spiral.push_back(matrix[i][min_column]);
            }
            min_column++;
        }


        return spiral;
    }
};