class Solution {
public:
    bool isNumber(string s) {
        int i = 0;
        int n = s.size();
        if (i < n && (s[i] == '+' || s[i] == '-'))
            i++;

        bool digit = false;
        bool dot = false;
        while (i < n && (isdigit(s[i]) || s[i] == '.'))
        {
            if (isdigit(s[i]))
                digit = true;
            if (s[i] == '.')
            {
                if (dot)
                    return false;

                dot = true;
            }
            i++;
        }
        if (!digit)
            return false;
        if (i < n && (s[i] == 'e' || s[i] == 'E'))
        {
            i++;
            if (i < n && (s[i] == '+' || s[i] == '-'))
                i++;
            bool exponentDigit = false;
            while (i < n && isdigit(s[i]))
            {
                exponentDigit = true;
                i++;
            }
            if (!exponentDigit)
                return false;
        }
        return i == n;
    }
};