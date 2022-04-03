#include<iostream>
using namespace std;

class Solution {
    int revNum(int x)
    {
        int rev =0,digit=0;
        while(x)
        {
            digit=x%10;
            rev=rev*10 + digit;
            x/=10;

        }
        return rev;
    }
public:
    bool isPalindrome(int x) {
        return x==revNum(x);
    }
};

int main()
{
    Solution obj;
    cout<<"Welcome to checing the palindrome number "<<obj.isPalindrome(112211)<<endl;
    
    return 0;
}