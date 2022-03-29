#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int len = s.length();
        int num=0;

        for(int i=0;i<len;i++)
        {
            num =   num*10 + s[i]-'0';

        }
        return num;
    }
};

int main(){
    Solution myObj;
    string str ="123";
    
    cout<<"WELCOME to String to Integer Conversion"<<endl;

    cout<<"String "<<str<<" equals : "<<myObj.myAtoi("123")<<endl;
}