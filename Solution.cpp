class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        string w = "", f = "", s = "";
        vector<string> vec;
        for (char c : text) {
            if (c != ' ') {
                w += c;
            } else {
                if (f == first && s == second) {
                    vec.push_back(w);
                }
                f = s;
                s = w;
                w = "";
            }
        }
        if (f == first && s == second) {
            vec.push_back(w);
        }
        return vec;
    }
};
