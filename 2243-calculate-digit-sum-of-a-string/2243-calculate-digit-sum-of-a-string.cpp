class Solution {
public:
    string digitSum(string s, int k) {

        while (s.length() > k) {
            string ans = "";

            for (int i = 0; i < s.length(); i += k) {

                string part = s.substr(i, k);

                int sum = 0;
                for (char ch : part) {
                    sum += ch - '0';
                }

                ans += to_string(sum);
            }

            s = ans;
        }

        return s;
    }
};