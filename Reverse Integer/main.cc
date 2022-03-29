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
        int temp,s1;   
        bool first=false;

        if(num>0)
            temp=num;
        else if(num<0)
            temp=num * (-1);
        else if(num = 0)
            return 0;

        int rnum=0;
        while(temp>0)
        {
            rnum=rnum*10 + temp%10;

            if(!first)
                s1=temp%10;


            temp/=10;
        }

        if(s1!=(rnum%10)){
            cout<<"Overflow Occured while Reversing the number"<<endl;
            num=0;
            return 0;
        }        

        if(num>0)
            num=rnum;
        else
            num=rnum*(-1);

        return num;
    }
    public:
    void print() {
        cout<<"Number value is "<<num<<endl;
    }
};


int main()
{   int num = INT32_MAX;
    Solution obj(num);
    cout<<"Reverse Integer Program sizeof(INT) = "<<sizeof(int)<<endl;


    obj.print();

    obj.reverse();

    obj.print();

}