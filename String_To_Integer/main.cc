#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
int myAtoi(string s)
    {
        int len = s.length();
        bool NegFlag = false, SignFlag = false, NumFlag = false;
        int num = 0;

        for (int i = 0; i < len; i++)
        {
            if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-' || s[i] == '+' || s[i] == ' ')
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    NumFlag = true;
                    if (num >= INT32_MAX / 10)
                    {
                        if (NegFlag)
                            return INT32_MIN;
                        else
                            return INT32_MAX;
                    }
                    num = num * 10 + s[i] - '0';
                }
                else if (s[i] == '-' && !SignFlag)
                {
                    SignFlag = true;
                    NegFlag = true;
                }
                else if (s[i] == '+' && !SignFlag)
                {
                    SignFlag = true;
                }
                else if ((s[i] == '-' || s[i] == '+') && SignFlag)
                    return num;
            }

            else if (NegFlag)
                return num * (-1);
            else if (!NegFlag)
                return num;
        }
        if (NegFlag)
            return (-1) * num;
        else
            return num;
    }
};

int main()
{
    Solution myObj;
    string str = "  --123 heello";

    cout << "WELCOME to String to Integer Conversion" << endl;
    cout << "String " << str << " equals : " << myObj.myAtoi(str) << endl;
}