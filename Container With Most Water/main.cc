#include<iostream>
#include<vector>
#include"sample.hh"
using namespace std;


class Solution {
/**
 * @brief add you function here below public
 * 
 */
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i,j,area=0,max_area=0,h;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                h = j-i;
                area = h * min(height[i],height[j]);

                if(area > max_area)
                    max_area = area;

            }
        }
    return max_area;
    }
 
};

int main()
{
    Solution obj;
    vector<int> vect{10,3,2,10};
    vector<int> vect1{1,8,6,2,5,4,8,3,7};
    cout<<"Welcome to checking the maxArea "<<obj.maxArea(sample) <<endl;
}