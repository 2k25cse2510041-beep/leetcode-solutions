class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int left = 0;
        int right = s.size() - 1;
        function<void(int, int)> reverse = [&](int left, int right)
        {
            if (left >= right)
                return;

            swap(s[left], s[right]);

            reverse(left + 1, right - 1);
        };
        reverse(left, right);
    }
};