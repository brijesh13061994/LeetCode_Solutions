#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int64_t len = s.length();
        bool NegFlag=false, NumFlag=false;

        int num=0;

        for(int i=0;i<len;i++)
        {
            if( (s[i]>='0' && s[i]<='9') 
                || s[i]=='-' || s[i]=='+' || s[i]==' ') 
            {
                if (s[i]>='0' && s[i]<='9') 
                {   
                    NumFlag=true;
                    num = num*10 + s[i]-'0';
                }
                else if(s[i] == '-')
                    NegFlag=true;
                    
                else if(s[i]=='+')
                    NegFlag=false;

            }

            else if(NegFlag)
                return num*(-1);
            else if(!NegFlag)
                return num;

        }
        if(NegFlag)
            return (-1)*num;
        else    
            return num;
    }
};

int main(){
    Solution myObj;
    string str ="  h-123 heello";
    
    cout<<"WELCOME to String to Integer Conversion"<<endl;
    cout<<"String "<<str<<" equals : "<<myObj.myAtoi(str)<<endl;

}