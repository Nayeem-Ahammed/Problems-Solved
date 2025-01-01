#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to compute the minimum sum for a given permutation
int computeMinSum(const vector<int>& perm) {
    int n = perm.size();
    int totalMinSum = 0;
    // Iterate through all group sizes (k = 1 to n)
    for (int k = 1; k <= n; ++k) {
        for (int i = 0; i <= n - k; ++i) {
            int groupMin = perm[i];
            for (int j = i + 1; j < i + k; ++j) {
                groupMin = min(groupMin, perm[j]);
            }
            totalMinSum += groupMin;
        }
    }
    return totalMinSum;
}

// Main function
int main() {
    int n = 4; // Number of elements
    int k;     // Position in the ranked order
    cout << "Enter the value of k: ";
    cin >> k;

    // Generate all permutations of {1, 2, ..., n}
    vector<int> elements(n);
    iota(elements.begin(), elements.end(), 1); // Fill with {1, 2, ..., n}
    vector<pair<vector<int>, int>> results;

    do {
        int minSum = computeMinSum(elements);
        results.push_back({elements, minSum});
    } while (next_permutation(elements.begin(), elements.end()));

    // Sort permutations by their minimum sum
    sort(results.begin(), results.end(), [](const auto& a, const auto& b) {
        return a.second < b.second; // Sort by minimum sum
    });

    // Find the k-th ranked permutation
    if (k > 0 && k <= results.size()) {
        cout << "The " << k << "-th permutation is: ";
        for (int num : results[k - 1].first) {
            cout << num << " ";
        }
        cout << "\nWith minimum sum: " << results[k - 1].second << endl;
    } else {
        cout << "Invalid k. Please enter a value between 1 and " << results.size() << endl;
    }

    return 0;
}
