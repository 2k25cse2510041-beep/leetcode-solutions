class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for (char c : s) {
            if ((c >= 'a' && c <= 'z') ||
                (c >= 'A' && c <= 'Z') ||
                (c >= '0' && c <= '9')) {

                if (c >= 'A' && c <= 'Z')
                    c = c + 32;

                t += c;
            }
        }
        function<bool(int, int)> check = [&](int left, int right) {
            if (left >= right)
                return true;
            if (t[left] != t[right])
                return false;
            return check(left + 1, right - 1);
        };

        return check(0, t.size() - 1);
    }
};