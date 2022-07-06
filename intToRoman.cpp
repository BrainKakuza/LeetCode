#include <iostream>
#include <sstream>
#include <string.h>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class Solution
{
public:
    string intToRoman(int num)
    {
        string result;

        stringstream ss;
        ss << num;
        string number = ss.str();

        int length = number.length();

        if (length == 4)
        {
            result.append(addText('M', number[0] - '0'));
            // cout << result << endl;
            result.append(addDecide('D', 'C', number[1] - '0', "CM"));
            // cout << result << endl;
            result.append(addDecide('L', 'X', number[2] - '0', "XC"));
            // cout << result << endl;
            result.append(addDecide('V', 'I', number[3] - '0', "IX"));
            // cout << result << endl;
        }

        if (length == 3)
        {
            result.append(addDecide('D', 'C', number[0] - '0', "CM"));
            // cout << result << endl;
            result.append(addDecide('L', 'X', number[1] - '0', "XC"));
            // cout << result << endl;
            result.append(addDecide('V', 'I', number[2] - '0', "IX"));
            // cout << result << endl;
        }

        if (length == 2)
        {
            result.append(addDecide('L', 'X', number[0] - '0', "XC"));
            // //cout << result << endl;
            result.append(addDecide('V', 'I', number[1] - '0', "IX"));
            // cout << result << endl;
        }

        if (length == 1)
        {
            result.append(addDecide('V', 'I', number[0] - '0', "IX"));
            ////cout << result << endl;
        }

        return result;
    }

private:

    string addText(char l, int num)
    {
        string result;
        while (num--)
        {
            result.push_back(l);
        }

        return result;
    }

    string addDecide(char bigNum, char smallNum, int num, string special)
    {
        string result;

        if (num == 9)
        {
            result = special;
        }
        else if (num >= 5)
        {
            result.push_back(bigNum);
            num -= 5;
            result.append(addText(smallNum, num));
        }
        else if (num == 4)
        {
            result.push_back(smallNum);
            result.push_back(bigNum);
        }
        else if (num < 4)
        {
            result.append(addText(smallNum, num));
        }

        return result;
    }
};

int main(void)
{
    Solution solution;
    cout << solution.intToRoman(3);
}