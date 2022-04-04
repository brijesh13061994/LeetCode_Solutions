#include<iostream>
#include<map>
using namespace std;

class Solution {
/**
 * @brief 
 * 
 */
map<int, string> ROMAN_NUMS;
public:
/**
 * @brief Construct a new Solution object
 * 
 */
    Solution(){
        ROMAN_NUMS.insert ( std::pair<int, string>(1,"I") );
        ROMAN_NUMS.insert ( std::pair<int, string>(5,"V") );
        ROMAN_NUMS.insert ( std::pair<int, string>(10,"X") );
        ROMAN_NUMS.insert ( std::pair<int, string>(50,"L") );
        ROMAN_NUMS.insert ( std::pair<int, string>(100,"C") );
        ROMAN_NUMS.insert ( std::pair<int, string>(500,"D") );
        ROMAN_NUMS.insert ( std::pair<int, string>(1000,"M") );
    }

    string intToRoman(int num) {
        string result;
        while(num){
            if(num >= 1000)
            {
                result.append(ROMAN_NUMS[1000]);
                num -= 1000;
            }
            else if(num>=500 && num<1000)
            {
                result.append(ROMAN_NUMS[500]);
                num -= 500;
            }
            else if(num>=100 && num<500)
            {
                result.append(ROMAN_NUMS[100]);
                num -= 100;
            }
            else if(num>=50 && num<100)
            {
                result.append(ROMAN_NUMS[50]);
                num -= 50;
            }
            else if(num>=10 && num<50)
            {
                result.append(ROMAN_NUMS[10]);
                num -= 10;
            }
            else if(num>=5 && num<10)
            {
                result.append(ROMAN_NUMS[5]);
                num -= 5;
            }
            else if(num>=1 && num<5)
            {
                result.append(ROMAN_NUMS[1]);
                num -= 1;
            }
        }

        return result;
    }
 
};

int main()
{
    Solution obj;
    cout<<"Welcome to checking the Integer to roman conversion "<<obj.intToRoman(3099)<<endl;

    return 0;
}