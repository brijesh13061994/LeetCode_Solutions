#include<iostream>
#include<vector>
using namespace std;

class Solution {
    static vector<string> solution;
    int stringToNumber(string str){
        int num=0;
        for(int i=0;i<str.length();i++){
            num = num*10 + str[i]-'0';
        }
        return num;
    }
    string getString(char num){
        int n= num - '0';
        switch(n){
            case 2: return "abc";
            case 3: return "def";
            case 4: return "ghi";
            case 5: return "jkl";
            case 6: return "mno";
            case 7: return "pqrs";
            case 8: return "tuv";
            case 9: return "wxyz";
        }

    }
    vector<string> findAllPerutations(vector<string> str_list,int i){
        

    }
/**
 * @brief add you function here below public
 * 
 */
public:
    vector<string> letterCombinations(string digits) {
        string temp;
        int i;
        vector<string> str_list;
        for(i=0;i<digits.length();i++){
            temp = getString(digits[i]);
            str_list.push_back(temp);
            cout<<str_list[i]<<" "<<str_list[i].length()<<endl;
        }
        solution.clear();
        findAllPerutations(str_list,0);

        for(i=0;i<digits.length();i++){
            
            cout<<solution[i]<<" "<<solution[i].length()<<endl;
        }
        
    }
};

int main()
{
    Solution obj;
    cout<<"Welcome to ***"<<endl;
    obj.letterCombinations("2823");
    return 0;
}