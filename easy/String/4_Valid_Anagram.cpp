class Solution {
public:
	bool isAnagram(string s, string t) {
		int slen = s.size();
		int tlen = t.size();
		if (slen != tlen) return false;
		int arr[26] = { 0 };

		for (int i = 0; i < slen; i++) arr[s[i] - 97]++;
		for (int j = 0; j < tlen; j++) arr[t[j] - 97]--;
		for (int i = 0; i < 26; i++) {
			if (arr[i] != 0)
				return false;
		}
		return true;
	}
};