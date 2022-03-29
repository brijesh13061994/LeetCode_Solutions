#include <iostream>
using namespace std;
class Solution {
    int num;
public:
    Solution(int x){
        num=x;
    }
    
    int reverse() {
        cout<<"Reversing the number"<<endl;
        int temp=0,rnum=0;
        if(num == 0 || num== INT32_MAX || num == INT32_MIN){
            num=0;
            return 0;
        }
        else if(num>0)
            temp=num;
        else if(num<0)
            temp=num * (-1);
        
        while(temp>0)
        {
            if (rnum>INT32_MAX/10)
            {
                num=0;
                return 0;
            }
            rnum=rnum*10 + temp%10;
            temp/=10;
        }


        if(num>0)
            num=rnum;
        else
            num=rnum*(-1);
        return num;
        
    }
    void print() {
        cout<<"Number value is "<<num<<endl;
    }
};

int main()
{   int num = -123;
    Solution obj(num);
    cout<<"Reverse Integer Program sizeof(INT)  = "<<sizeof(int)<<" "<<INT32_MAX<<" "<<INT32_MIN<<endl;
    obj.print();
    obj.reverse();
    obj.print();
}