// Maximum odd binary number leetcode
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int one = 0; int zero = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') one++;else zero++;
        }
        return string(one-1,'1')+string(zero,'0')+'1';
    }
};

// the string(n,'X') will  create a string with n 'X'

// Problem : to create highest odd binary number
// every odd binary num has 1 at the 0th postition which is technically n-1th position
// so just create a string with (n-1) ones then zeros except last position where 1 comes which makes it odd