#include<iostream>
#include<vector>
using namespace std;

#define max(x,y) ((x>y)?x:y)
#define min(x,y) ((x<y)?x:y)
#define mod(x) ((x<0)?(x*-1):x)

class Solution {
    int small,mid ,big;
    void order_init(int a, int b,int c){
        big = max(a,max(b,c));
        small=min(a,min(b,c));        
    }
void insertNonDuplicateElement(vector<vector<int>>& ans,vector<int>& nums)
{
    
    bool isRepeat=false;
    int i;
    int sol=0,sol1=0;
    for(i=0;i<ans.size();i++)
    {
        // if (ans[i]==nums)
        // {
        //     isRepeat=true;
        // }
        sol=mod(ans[i][0])+mod(ans[i][1])+mod(ans[i][2]);
        sol1=mod(nums[0])+mod(ans[1])+mod(ans[2]);
    }
    if(!isRepeat){
        ans.insert(ans.end(),nums);
    }

}

/**
 * @brief add you function here below public
 * 
 */
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k;
        int c=0;
        int small, mid,big;
        vector<int> temp;
        vector<vector<int>> answer;
        if(nums.size()<3)
            return answer;

        for(i=0;i<nums.size()-2;i++)
            for(j=1;j<nums.size()-1;j++)
                for(k=2;k<nums.size();k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                        {
                            order_init(nums[i],nums[j],nums[k]);

                            temp.insert(temp.begin(),small);
                            temp.insert(temp.begin()+1,mid);
                            temp.insert(temp.begin()+2,big);
                            insertNonDuplicateElement( answer,temp );
                            temp.clear();
                            // answer.insert(answer.begin()+c,temp);
                        }

                }
        return answer;
    }
};

int main()
{
    Solution obj;
    cout<<"Welcome to 3 SUM"<<endl;
    return 0;
}