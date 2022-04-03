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
            rev=rev*10 + digit;
            x/=10;

        }
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
        return x==revNum(x);
    }
};

int main()
{
    Solution obj;
    cout<<"Welcome to checing the palindrome number "<<obj.isPalindrome(112211)<<endl;
    
    return 0;
}