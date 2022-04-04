#include<iostream>
#include<vector>
#include"Test_Vector.hh"
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

    int maxAreaOptimized(vector<int>& height) {
     int n = height.size()-1;
        int i=0,j=n;
        int area=0,max_area=0,h;
        while(i<=j)
        {
            area = (j-i) * min(height[i],height[j]);
            
            if(max_area<area)
                max_area = area;

            if(height[i]<=height[j])
                i++;
            else
                j--;
        }
        return max_area;
    }
 
};

int main()
{
    Solution obj;
    vector<int> vect{10,3,2,10};
    vector<int> vect1{1,8,6,2,5,4,8,3,7};
    cout<<"Welcome to checking the maxArea "<<sample.size()<<" "<<obj.maxArea(sample) <<endl;

    cout<<"Welcome to checking the maxAreaOptimized "<<sample.size()<<" "<<obj.maxAreaOptimized(sample) <<endl;
}