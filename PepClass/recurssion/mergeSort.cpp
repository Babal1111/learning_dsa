#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> temp(m + n); // Correct vector initialization
    int i = 0, p = 0, q = 0;
    while (p < m && q < n) {
        if (nums1[p] < nums2[q]) {
            temp[i++] = nums1[p++];
        } else {
            temp[i++] = nums2[q++];
        }
    }
    while (p < m) {
        temp[i++] = nums1[p++];
    }
    while (q < n) {
        temp[i++] = nums2[q++];
    }
    return temp;
}

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 5, 6};
    vector<int> result = merge(nums1, 3, nums2, 3);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
