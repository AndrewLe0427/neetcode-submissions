class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length()) return false;

        int countS[256] = {0}, countT[256] = {0};
        int index = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            index = (int) s[i];
            countS[index] += 1;

            index = (int) t[i];
            countT[index] += 1;
        }

        for (char i : t)
        {
            index = (int) i;

            if (countS[index] < countT[index]) return false;
        }

        return true;
    }
};
