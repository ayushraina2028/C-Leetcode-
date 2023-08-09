#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector <int> intersection(vector <int> nums1, vector <int> nums2) {
    vector <int> ans;
    int n1 = nums1.size();
    int n2 = nums2.size();
    int n;
    int temp = INT_MIN;

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    for(int i = 0;i < n1;i++) {
        for(int j = 0;j < n2;j++) {
            if(nums1[i] == nums2[j]) {
                int x = temp;
                temp = nums1[i];
                if(temp != x) {
                    ans.push_back(temp);
                }
            }
        }
    }

    return ans;
}

int main() {

    vector <int> nums1 = {1,2,2,1};
    vector <int> nums2 = {1,2};

    vector <int> answer = intersection(nums1, nums2);
    for(int i = 0;i < answer.size();i++) {
        cout << answer[i] << " ";
    }

    cout << endl;
}