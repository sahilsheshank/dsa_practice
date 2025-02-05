class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.size() != s2.size()) return false;

        vector<int> diff; // Stores indexes where s1 and s2 differ

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                diff.push_back(i);
            }
        }

        // Case 1: Strings are already equal (no swaps needed)
        if (diff.size() == 0) return true;

        // Case 2: Only two mismatches, and swapping them makes strings equal
        if (diff.size() == 2) {
            return (s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]]);
        }

        // Otherwise, more than one swap is required
        return false;
    }
};
