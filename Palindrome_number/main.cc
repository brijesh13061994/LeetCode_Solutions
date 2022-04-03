#include<iostream>
using namespace std;

class Solution {
    /**
     * @brief reverses the number and returns the reversed value
     * 
     * @param x 
     * @return int 
     */
    int revNum(int x)
    {
        int rev =0,digit=0;
        while(x)
        {
            digit=x%10;
            if(rev> INT_MAX/10)
                return 44;
            rev=rev*10 + digit;
            x/=10;

        }
        cout<<"reversed number "<<rev<<endl;
        return rev;
    }
public:
/**
 * @brief checks if a number is a palindrome or not by 
 * reversing the number and comparing it with the number
 * 
 * @param x 
 * @return true 
 * @return false 
 */
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }                                // stupid condition for leetcode

        return 
            x==revNum(x);
    }
};
int main()
{
    Solution obj;
    cout<<"Welcome to checking the palindrome number "<<obj.isPalindrome(-121)<<endl;
    
    return 0;
}