class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length()) return false;

        int hashS[256] = {0}, hashT[256] = {0};
        int index = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            index = (int) s[i];
            hashS[index] += 1;

            index = (int) t[i];
            hashT[index] += 1;
        }

        for (char i : t)
        {
            index = (int) i;

            if (hashS[index] < hashT[index]) return false;
        }

        return true;
    }
};
