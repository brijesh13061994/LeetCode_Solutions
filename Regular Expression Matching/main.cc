#include<iostream>
using namespace std;

class Solution {
/**
 * @brief add you function here below public
 * 
 */
bool patternMatch(string s, string p){
    return true;
}
public:
/**
 * @brief check if pattern p is matching with string s
 * 
 * @param s 
 * @param p 
 * @return true 
 * @return false 
 */
    bool isMatch(string s, string p) {
        int i;
        if( s.length() == p.length() )
            if(s.compare(p))
                return true;
            else 
                return false;
        else if(s.length() < p.length())
            return false;
        else if(s.length() > p.length())
            return patternMatch(s,p);

    }
 
};

int main()
{
    Solution obj;
    cout<<"Welcome to checking the Regular Expression Matching"<<endl;
}