#include <iostream>
#include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::stringstream;

class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss;
        ss << x;
        string number = ss.str();

        int length = number.length();
        bool parlindrome = true;

        int i = 0 , j = length - 1;

        while(i != length - 1 && j != 0)
        {
            if(number[i] != number[j])
            {
                parlindrome = false;
                break;
            }

            i++;
            j--;
        }

        if(parlindrome)
        {
            return true;
        }else
        {
            return false;
        }

    }
};

int main(void)
{
    Solution solution;
    cout << solution.isPalindrome(10);
}