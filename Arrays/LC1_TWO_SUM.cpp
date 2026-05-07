#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < arr.size(); i++) {
            int first = arr[i];
            int second = target - first;
            if (m.find(second) != m.end()) {

                return {m[second], i};
            }
            m[first] = i;
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution obj;
    vector<int> ans = obj.twoSum(nums, target);
    cout << "Indices are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}