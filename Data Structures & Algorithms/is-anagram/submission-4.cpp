class Solution {
public:
    bool isAnagram(string s, string t) {
    // If lengths are different, they cannot be anagrams
    if (s.size() != t.size()) {
        return false;
    }

    // Create a frequency array for the 26 lowercase letters
    int count[26] = {0};

    // Increment for string s, decrement for string t
    for (size_t i = 0; i < s.size(); i++) {
        count[s[i] - 'a']++; // Map 'a'->0, 'b'->1, etc.
        count[t[i] - 'a']--;
    }

    // If all counts are 0, it's a perfect anagram
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
    }
};
