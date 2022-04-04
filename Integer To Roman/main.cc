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
        ROMAN_NUMS.insert ( std::pair<int, string>(4,"IV") );
        ROMAN_NUMS.insert ( std::pair<int, string>(5,"V") );
        ROMAN_NUMS.insert ( std::pair<int, string>(9,"IX") );
        ROMAN_NUMS.insert ( std::pair<int, string>(10,"X") );
        ROMAN_NUMS.insert ( std::pair<int, string>(40,"XL") );
        ROMAN_NUMS.insert ( std::pair<int, string>(50,"L") );
        ROMAN_NUMS.insert ( std::pair<int, string>(90,"XC") );
        ROMAN_NUMS.insert ( std::pair<int, string>(100,"C") );
        ROMAN_NUMS.insert ( std::pair<int, string>(400,"CD") );
        ROMAN_NUMS.insert ( std::pair<int, string>(500,"D") );
        ROMAN_NUMS.insert ( std::pair<int, string>(900,"CM") );
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
                if(num>=900){
                    result.append(ROMAN_NUMS[900]);
                    num -= 900;
                }
                else{
                    result.append(ROMAN_NUMS[500]);
                    num -= 500;
                }
            }
            else if(num>=100 && num<500)
            {
                if(num>=400){
                    result.append(ROMAN_NUMS[400]);
                    num -= 400;
                }
                else{
                    result.append(ROMAN_NUMS[100]);
                    num -= 100;
                }
            }
            else if(num>=50 && num<100)
            {
                if(num>=90){
                    result.append(ROMAN_NUMS[90]);
                    num -= 90;
                }
                else{
                    result.append(ROMAN_NUMS[50]);
                    num -= 50;
                }
                
            }
            else if(num>=10 && num<50)
            {
                if(num>=40){
                    result.append(ROMAN_NUMS[40]);
                    num -= 40;
                }
                else{
                    result.append(ROMAN_NUMS[10]);
                    num -= 10;
                }                
            }
            else if(num>=5 && num<10)
            {
                if(num==9){
                    result.append(ROMAN_NUMS[9]);
                    num -= 9;
                }
                else{
                    result.append(ROMAN_NUMS[5]);
                    num -= 5;
                }
            }
            else if(num>=1 && num<5)
            {
                if(num==4){
                    result.append(ROMAN_NUMS[4]);
                    num -= 4;
                }
                else{
                    result.append(ROMAN_NUMS[1]);
                    num -= 1;
                }
            }
        }

        return result;
    }

    string intToRomanOptimized(int num) {
        string result;
        while(num){
            switch(num){
                case 1000 ... 3999:
                    result.append(ROMAN_NUMS[1000]);
                    num -= 1000;
                    break;
                case 900 ... 999:
                    result.append(ROMAN_NUMS[900]);
                    num -= 900;
                    break;
                case 500 ... 899:
                    result.append(ROMAN_NUMS[500]);
                    num -= 500;
                    break;
                case 400 ... 499:
                    result.append(ROMAN_NUMS[400]);
                    num -= 400;
                    break;
                case 100 ... 399:
                    result.append(ROMAN_NUMS[100]);
                    num -= 100;
                    break;
                case 90 ... 99:
                    result.append(ROMAN_NUMS[90]);
                    num -= 90;
                    break;
                case 50 ... 89:
                    result.append(ROMAN_NUMS[50]);
                    num -= 50;
                    break;
                case 40 ... 49:
                    result.append(ROMAN_NUMS[40]);
                    num -= 40;
                    break;
                case 10 ... 39:
                    result.append(ROMAN_NUMS[10]);
                    num -= 10;
                    break;
                case 9:
                    result.append(ROMAN_NUMS[9]);
                    num -= 9;
                    break;
                case 5 ... 8:
                    result.append(ROMAN_NUMS[5]);
                    num -= 5;
                    break;
                case 4:
                    result.append(ROMAN_NUMS[4]);
                    num -= 4;
                    break;
                case 1 ... 3:
                    result.append(ROMAN_NUMS[1]);
                    num -= 1;
                    break;
            }
        }
        return result; 
    }
 
};

int main()
{
    Solution obj;
    int num = 900;
    cout<<"Welcome to checking the Integer to roman conversion "<<num<<" \n ANS: "
        <<obj.intToRoman(1994)<<endl<<"Expected MCMXCIV"<<endl;

        cout<<"Welcome to checking the Integer to roman conversion optimized "<<num<<" \n ANS: "
        <<obj.intToRomanOptimized(1994)<<endl<<"Expected MCMXCIV"<<endl;

    return 0;
}