class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (string str: strs){
            encoded += '3';
            encoded += '-';
            encoded += str;
            encoded += '-';
            encoded += '1'; 
        }
        return encoded;
    }

    vector<string> decode(const string& s) {
        vector<string> decoded;
        size_t i = 0;

        while (i < s.size()) {
            if (s[i] == '3' && i + 1 < s.size() && s[i + 1] == '-') {
                i += 2;

                string word;
                while (i + 1 < s.size() && !(s[i] == '-' && s[i + 1] == '1')) {
                    word += s[i];
                    i++;
                }
                if (i + 1 < s.size() && s[i] == '-' && s[i + 1] == '1') {
                    decoded.push_back(word);
                    i += 2;
                }
            } 
            else {
                i++;
            }
        }

        return decoded;
    }
};
