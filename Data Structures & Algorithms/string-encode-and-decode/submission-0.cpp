class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (string& s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;

        while (i < s.size()) {

            // Find the '#'
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            // Convert length from string to integer
            int len = stoi(s.substr(i, j - i));

            // Extract the actual string
            string word = s.substr(j + 1, len);

            result.push_back(word);

            // Move to the beginning of next encoded string
            i = j + 1 + len;
        }

        return result;
    }
};
