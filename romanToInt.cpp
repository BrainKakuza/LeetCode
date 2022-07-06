#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Solution
{
public:
    int romanToInt(string s)
    {
        int result = 0, i = 0 , tempNum;

        if (s[i] == 'M')
        {
            result += 1000;
            i++;

            while(s[i] == 'M')
            {
                result += 1000;
                i++;
            }
        }

        if (s[i] == 'D' || s[i] == 'C')
        {
            tempNum = 0;

            if (s[i] == 'D')
            {
                tempNum += 500;
                i++;
                while (s[i] == 'C')
                {
                    tempNum += 100;
                    i++;
                }
            }
            else if (s[i] == 'C')
            {
                tempNum += 100;
                i++;

                if (s[i] == 'M')
                {
                    tempNum += 800;
                    i++;
                }
                else if (s[i] == 'D')
                {
                    tempNum += 300;
                    i++;
                }
                else
                {
                    while (s[i] == 'C')
                    {
                        tempNum += 100;
                        i++;
                    }
                }
            }

            result += tempNum;
        }

        if(s[i] == 'L' || s[i] == 'X')
        {
            tempNum = 0;

            if(s[i] == 'L')
            {
                tempNum += 50;
                i++;
                while(s[i] == 'X')
                {
                    tempNum += 10;
                    i++;
                }
            }else if(s[i] == 'X')
            {
                tempNum += 10;
                i++;
                if(s[i] == 'C')
                {
                    tempNum += 80;
                    i++;
                }else if(s[i] == 'L')
                {
                    tempNum += 30;
                    i++;
                }else
                {
                    while(s[i] == 'X')
                    {
                        tempNum += 10;
                        i++;
                    }
                }
            }

            result += tempNum;
        }

        if(s[i] == 'V' || s[i] == 'I')
        {
            tempNum = 0;

            if(s[i] == 'V')
            {
                tempNum += 5;
                i++;
                while(s[i] == 'I')
                {
                    tempNum += 1;
                    i++;
                }
            }else if(s[i] == 'I')
            {
                tempNum += 1;
                i++;

                if(s[i] == 'X')
                {
                    tempNum += 8;
                    i++;
                }else if(s[i] == 'V')
                {
                    tempNum += 3;
                    i++;
                }else
                {
                    while(s[i] == 'I')
                    {
                        tempNum += 1;
                        i++;
                    }
                }
            }

            result += tempNum;
        }

        return result;
    }

    int NumberConvert()
    {

    }
   
};

int main(void)
{
    Solution solution;
    cout << solution.romanToInt("MMCCCXCIX");
}