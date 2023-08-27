#include <iostream>
#include <vector>

using namespace std;

// Recursive function to find all subsets of a vector
void findSubsets(vector<int>& nums, vector<int>& currentSubset, int index) {
    // Base case: If the index is equal to the size of the vector, we've reached the end.
    if (index == nums.size()) {
        // Print the current subset
        cout << "{";
        for (int i = 0; i < currentSubset.size(); ++i) {
            cout << currentSubset[i];
            // if (i != currentSubset.size() - 1) {
            //     cout << ", ";
            // } 
        }
        cout << "}" << endl;
        return;
    }

    // Include the current element in the subset
    currentSubset.push_back(nums[index]);
    cout << "Including " << nums[index] << " in the subset." << endl;
    findSubsets(nums, currentSubset, index + 1);

    // Exclude the current element from the subset and backtrack
    currentSubset.pop_back();
    cout << "Excluding " << nums[index] << " from the subset." << endl;
    findSubsets(nums, currentSubset, index + 1);
}

int main() {
    vector<int> nums = {1, 2, 3};

    cout << "Subsets:" << endl;
    vector<int> currentSubset;
    findSubsets(nums, currentSubset, 0);

    return 0;
}
